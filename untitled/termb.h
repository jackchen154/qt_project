
#ifdef __cplusplus
extern "C" {
#endif


int  InitComm(int port);
int  InitCommExt();
int  CloseComm();
int  Authenticate();
int  Read_Content( int active);
int  Read_Content_Path(char* cPath, int active);
int  GetDeviceID( char * pMsg );
char  GetSAMID();
int  GetPhoto(char * Wlt_File);
void  MfrInfo(char * cDeviceType,char * cDeviceCategory,char * cDeviceName,char * cMfr);
#ifdef __cplusplus
}
#endif
