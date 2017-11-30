#!/usr/bin/python
#include "opencv2/face.hpp"
import cv2
import os

from PIL import Image
from numpy import array
faceDetect=cv2.CascadeClassifier('haarcascade_frontalface_default.xml');
cam=cv2.VideoCapture(0);
rec=cv2.createLBPHFaceRecognizer();