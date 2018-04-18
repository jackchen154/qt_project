#ifdef __cplusplus
extern "C" {
#endif

//过程：初始化串口=>卡认证=>读卡=>关闭串口

int  InitComm(int port);//初始化串口,参数1~4为串口，1001~1004为USB（返回值1：正确，其他：错误）;
int  InitCommExt();//初始化串口(扩展,循环查找定位串口)，搜索成功返回对应端口号，否则返回0;
int  CloseComm();//关闭串口（返回值1：正确，其他：错误）;
int  Authenticate();//卡认证，若卡片放置后发生认证错误时，应移走卡片重新放置。（返回值1：卡片正确放置，其他：错误）;

int  Read_Content( int active);//读卡操作,信息文件存储在应用程序当前目录下;
/* 参数1:读基本信息(文字信息WZ.TXT,相片文件XP.WLT和ZP.BMP,指纹信息文件FP.DAT)
 * 参数2:只读文字信息(文字信息WZ.TXT,相片文件XP.WLT)
 * 参数3:读最新住址信息(形成最新住址文件NEWADD.TXT)
 * 返回值0:读卡错误
 * 返回值1:正确
 * 返回值2:没有最新住址信息
 * 返回值3:正确，并且有指纹信息
 * 返回值<0:其他错误
 */

int  Read_Content_Path(char* cPath, int active);//读卡操作,信息文件存储在指定目录下。
int  GetDeviceID( char * pMsg );//获取设备编号（返回值1：正确，0：错误）
//BSTR  GetSAMID();//获取SAM编号。
int  GetPhoto(char * Wlt_File);//获取bmp照片(将wlt照片解码为bmp格式)（返回值1：正确，其他：错误）。
void  MfrInfo(char * cDeviceType,char * cDeviceCategory,char * cDeviceName,char * cMfr);//获取厂商和产品信息
/*cDeviceType			产品型号
  cDeviceCategory		产品类别
  cDeviceName			产品名称
  cMfr					厂商名称
*/
#ifdef __cplusplus
}
#endif
