import os,sys,time,re

SF=sys.argv[1]
TF=sys.argv[2]

S=open(SF,'rb') ; T=open(TF,'wb')

T.write( S.read().decode('utf8').encode('cp1251') )

S.close() ; T.close()

