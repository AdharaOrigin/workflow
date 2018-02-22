from ubuntu:16.04

LABEL description="A build environment for Red Screen Project."

RUN apt-get update && apt-get install -y \
build-essential \
cmake git \
libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev \
python3.5-dev python3-numpy libtbb2 libtbb-dev \
libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev \
libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev \
libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev

RUN cd /opt &&\
git clone https://github.com/Itseez/opencv.git

RUN cd /opt/opencv &&\
mkdir release &&\
cd release &&\
cmake -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local /opt/opencv/

RUN cd /opt/opencv/release &&\
make -j4 &&\
make install &&\
ldconfig &&\
cd / &&\
rm -rf /opt/opencv &&\
cd ~

CMD ["/bin/bash"]
