
1,初始化ffmpeg和SDL [创建窗口和渲染器]
2,初始化帧队列，创建文件读取线程
读取线程
{
	创建avformatcontext和avpacket
	avformat_open_input打开输入源
	avformat_find_stream_info 探测媒体类型
	判断是否是实时流
	
	//初始化各个流参数av_find_best_stream获取到每个流的索引index
	// 根据流索引index 打开流
	{
		avcodec_alloc_context3分配AVCodecContext
		avcodec_parameters_to_context 将avformatcontext中流中解码信息拷贝到AVCodecContext中
		avctx->pkt_timebase = ic->streams[stream_index]->time_base; //设置timebase
		avcodec_find_decoder 查找解码器
		avcodec_open2 打开解码器
		SDL_OpenAudioDevice打开音频设备SDL_AudioSpec
		初始化解码队列，启动解码线程 //分音频，视频，字幕流
		{
			audio_thread
			{
				AVFrame *frame = av_frame_alloc();  // 分配解码帧
			}
			video_thread
			{
				AVFrame *frame = av_frame_alloc();  // 分配解码帧
				AVRational tb = is->video_st->time_base; // 获取stream timebase
				//2 获取帧率，以便计算每帧picture的duration
				AVRational frame_rate = av_guess_frame_rate(is->ic, is->video_st, NULL);
				//获取解码后的视频帧
				get_video_frame(is, frame);
				//配置视频滤镜
				configure_video_filters
				//计算pts

			 	// 5 将解码后的视频帧插入队列
            	ret = queue_picture(is, frame, pts, duration, frame->pkt_pos, is->viddec.pkt_serial);

			}
			subtitle_thread
			{
			}
		}

	}
	
}


