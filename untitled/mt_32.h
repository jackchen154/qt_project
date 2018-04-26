#include <windows.h>
#ifdef __cplusplus
extern "C" {
#endif

	HANDLE  __stdcall open_device(unsigned char nPort,unsigned long ulBaud);
	int __stdcall close_device(HANDLE icdev);
	int __stdcall get_version(HANDLE icdev,unsigned char *nVerLen,unsigned char *sVerData);
	int __stdcall dev_beep(HANDLE icdev, unsigned char nMsec,unsigned char nMsec_end,unsigned char nTime );
	int __stdcall dev_setbaud(HANDLE icdev,unsigned char nBaud);
	int __stdcall dev_disp(HANDLE icdev, unsigned char nStatus);
	int __stdcall dev_cardstate(HANDLE icdev, unsigned char* nCardStatus);
	int __stdcall rf_encrypt(unsigned char *key,unsigned char *ptrSource, unsigned int msgLen,unsigned char *ptrDest);
	int __stdcall rf_decrypt(unsigned char *key,unsigned char *ptrSource, unsigned int msgLen,unsigned char *ptrDest);
	int __stdcall hex_asc(unsigned char *sHex,unsigned char *sAsc,unsigned long ulLength);
	int __stdcall asc_hex(unsigned char *sAsc,unsigned char *sHex,unsigned long ulLength);
	int __stdcall rf_desele(HANDLE icdev);
	int __stdcall rf_halt(HANDLE icdev);
	//读产品序列号
	int __stdcall dev_readsnr(HANDLE icdev,unsigned char nSnrLen,char* sSnrData);
	//写产品序列号
	int __stdcall dev_writesnr(HANDLE icdev,unsigned char nSnrLen,char* sSnrData);
	//读EEPROM
	int __stdcall dev_readeeprom(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sReadData);
	//写EEPROM
	int __stdcall dev_writeeeprom(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sWriteData);
	//读取产品注册标识号
	int __stdcall dev_readregno(HANDLE icdev, unsigned char *nRegnoLen, unsigned char *sRegNo); 
	//******************************* Contactless CPU card *****************************************//
	int __stdcall OpenCard(HANDLE icdev, unsigned char nMode,unsigned char *sSnr,unsigned char *sCardInfo, unsigned char *nCardInfoLen) ;
	int __stdcall Open_Card(HANDLE icdev, unsigned char nMode,unsigned char *sSnr) ;
	int __stdcall Reset_Card(HANDLE icdev,unsigned char *sCardInfo, unsigned char *nCardInfoLen) ;
	int __stdcall ExchangePro(HANDLE icdev, unsigned char *sCmd, unsigned short nCmdLen, unsigned char *sResp, unsigned short *nRespLen);
	int __stdcall CloseCard(HANDLE icdev);
	int __stdcall ExchangePro_hex(HANDLE icdev, char *sCmd,  char *sResp);

	//******************************* Contact CPU card and PSAM card ********************************//
	int __stdcall ICC_Reset(HANDLE icdev, unsigned char nCardSet, unsigned char *sAtr, unsigned char *nAtrLen);
	int __stdcall ICC_Reset_Baud(HANDLE icdev, unsigned char nCardSet, unsigned char nBaud,unsigned char *sAtr, unsigned char *nAtrLen);
	int __stdcall ICC_PowerOn(HANDLE icdev, unsigned char nCardSet, unsigned char *sAtr, unsigned char *nAtrLen);
	int __stdcall ICC_CommandExchange(HANDLE icdev, unsigned char nCardSet, unsigned char *sCmd, unsigned short nCmdLen, unsigned char *sResp, unsigned short *nRespLen);
	int __stdcall ICC_PowerOff(HANDLE icdev, unsigned char nCardSet);
	int __stdcall ICC_CommandExchange_hex(HANDLE icdev,  unsigned char nCardSet,  char *sCmd,  char *sResp);
	int __stdcall ICC_PowerOn_Baud(HANDLE icdev, unsigned char nCardSet, unsigned char nBaud,unsigned char *sAtr, unsigned char *nAtrLen);

	//******************************* M1 card ********************************************************//
	int __stdcall rf_reset(HANDLE icdev);
	int __stdcall rf_card (HANDLE icdev,unsigned char nMode,unsigned char *sSnr);
	int __stdcall rf_authentication_key (HANDLE icdev,unsigned char nMode,unsigned char nBlockaddr,unsigned char *sNkey);
	int __stdcall rf_read (HANDLE icdev,unsigned char nAdr,unsigned char *sReadData);
	int __stdcall rf_read_hex (HANDLE icdev,unsigned char nAdr,unsigned char *sReadData);
	int __stdcall rf_write (HANDLE icdev,unsigned char nAdr,unsigned char *sWriteData);
	int __stdcall rf_write_hex (HANDLE icdev,unsigned char nAdr,unsigned char *sWriteData);
	int __stdcall rf_initval(HANDLE icdev,unsigned char nAdr,unsigned long ulValue);
	int __stdcall rf_readval(HANDLE icdev,unsigned char nAdr,unsigned long *ulValue);
	int __stdcall rf_increment(HANDLE icdev,unsigned char nAdr,unsigned long ulValue);
	int __stdcall rf_decrement(HANDLE icdev,unsigned char nAdr,unsigned long ulValue);
	int __stdcall rf_transfer(HANDLE icdev,unsigned char nAdr);
	int __stdcall rf_terminal(HANDLE icdev);
	int __stdcall rf_restore(HANDLE icdev,unsigned char nAdr); 

	//******************************* Record **********************************************************//
	int __stdcall open_record(HANDLE icdev);
	int __stdcall close_record(HANDLE icdev);
	int __stdcall nt_read(HANDLE icdev,unsigned long ulAddr,unsigned char* sRecordData);

	//******************************* SLE4442 ********************************************************//
	//接触式卡类型选择
	int __stdcall contact_select(HANDLE icdev,unsigned char nCardType);
	int _stdcall contact_verify(HANDLE icdev, unsigned char *nCardType);
	//判断是否为4442卡
	int __stdcall sle4442_is42( HANDLE icdev,unsigned char* sCardState );
	//读4442卡
	int __stdcall sle4442_read(HANDLE icdev,unsigned char nAddr,unsigned short nDLen,unsigned char* sRecData);
	//写4442卡
	int __stdcall sle4442_write(HANDLE icdev,unsigned char nAddr,unsigned short nWLen,unsigned char* sWriteData);
	//442卡校验密码
	int __stdcall sle4442_pwd_check(HANDLE icdev,unsigned char* sKey);
	// 读密码
	//int __stdcall sle4442_pwd_read(HANDLE icdev,unsigned char* sKey);
	//修改密码
	int __stdcall sle4442_pwd_modify(HANDLE icdev,unsigned char* sKey);
	//读保护位
	int __stdcall sle4442_probit_read(HANDLE icdev,unsigned char* nLen,unsigned char* sProBitData);
	//写保护位
	int __stdcall sle4442_probit_write(HANDLE icdev,unsigned char nAddr,unsigned short nWLen,unsigned char*sProBitData);
	//读错误计数
	int __stdcall sle4442_errcount_read(HANDLE icdev,unsigned char* nErrCount);
	
	//******************************* SLE4428 ********************************************************//
	//检测是否为4428卡
	int __stdcall sle4428_is28(HANDLE icdev,unsigned char* sCardState);
	//读4428卡
	int __stdcall sle4428_read(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sRecData);
	//写4428卡
	int __stdcall sle4428_write(HANDLE icdev,unsigned short nAddr,unsigned short nWLen,unsigned char* sWriteData);
	//4428卡校验密码
	int __stdcall sle4428_pwd_check(HANDLE icdev,unsigned char* sKey);
	//修改密码
	int __stdcall sle4428_pwd_modify(HANDLE icdev,unsigned char* sKey);
	// 读密码
	//int __stdcall sle4428_pwd_read(HANDLE icdev,unsigned char* sKey);
	//带保护位读数据
	int __stdcall sle4428_probit_readdata(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sRecData);
	//带保护位写数据
	int __stdcall sle4428_probit_writedata(HANDLE icdev,unsigned short nAddr,unsigned short nWLen,unsigned char*sWriteData);
	//读错误计数
	//int __stdcall sle4428_errcount_read(HANDLE icdev,unsigned char* nErrCount);
	

	//******************************* AT88SC102 *****************************************************//
	//卡片密码校验
	int __stdcall at88sc102_pwd_check(HANDLE icdev,unsigned char* sKey);

	//修改卡片密码
	int __stdcall at88sc102_pwd_modify(HANDLE icdev,unsigned char* sNewKey);

	//读取卡片密码
	int __stdcall at88sc102_pwd_read(HANDLE icdev,unsigned char* sKey);

	//用户区1擦除密码校验
	int __stdcall at88sc102_ua1_epwd_check(HANDLE icdev,unsigned char* sKey);

	//修改用户区1擦除密码
	int __stdcall at88sc102_ua1_epwd_modify(HANDLE icdev,unsigned char* sNewKey);
	
	//读取用户区1擦除密码
	int __stdcall at88sc102_ua1_epwd_read(HANDLE icdev,unsigned char* sKey);
	
	//用户区2擦除密码校验
	int __stdcall at88sc102_ua2_epwd_check(HANDLE icdev,unsigned char* sKey);
	
	//修改用户区2擦除密码
	int __stdcall at88sc102_ua2_epwd_modify(HANDLE icdev,unsigned char* sNewKey);
	
	//读取用户区2擦除密码
	int __stdcall at88sc102_ua2_epwd_read(HANDLE icdev,unsigned char* sKey);
	
	//读取密码错误计数器值
	int __stdcall at88sc102_pwd_errorcount(HANDLE icdev,unsigned char* nErrorCount);
	
	//读取EZ2擦除计数器值
	int __stdcall at88sc102_ua2_fusecount(HANDLE icdev,unsigned char* nCount);

	//读发行商代码
	int __stdcall at88sc102_issuer_read(HANDLE icdev,unsigned char *sRecvData);
	
	//更新发行商代码
	int __stdcall at88sc102_issuer_write(HANDLE icdev,unsigned char *sWriteData);
	
	//读代码保护区
	int __stdcall at88sc102_protect_read(HANDLE icdev,unsigned char *sRecvData);
	
	//更新代码保护区
	int __stdcall at88sc102_protect_write(HANDLE icdev,unsigned char *sWriteData);
	
	/*保护位清零:写保护位1，写保护位2，读保护位1，读保护位2
	nProBitType:1-写保护位1;2--写保护位2;3--读保护位1;4--读保护位2.
	*/
	int __stdcall at88sc102_probit_clr(HANDLE icdev,unsigned char nProBitType);
	
	//从用户区1指定地址读取数据
	int __stdcall at88sc102_ua1_readdata(HANDLE icdev,unsigned char nAddr,unsigned char nRLen,unsigned char* sRecData);
	
	//从用户区2指定地址读取数据
	int __stdcall at88sc102_ua2_readdata(HANDLE icdev,unsigned char nAddr,unsigned char nRLen,unsigned char* sRecData);
	//擦除用户区1数据
	int __stdcall at88sc102_ua1_clrdata(HANDLE icdev);
	
	//擦除用户区2数据，nECState:1--EC关闭,2--EC打开.
	int __stdcall at88sc102_ua2_clrdata(HANDLE icdev,unsigned char nECState);
	
	//模拟熔断
	int __stdcall at88sc102_Anafuse(HANDLE icdev);
	
	//取消模拟熔断
	int __stdcall at88sc102_Anafuse_cancel(HANDLE icdev);
	
	//修改用户区1数据
	int __stdcall at88sc102_ua1_modifydata(HANDLE icdev,unsigned char nAddr,unsigned char nMLen,unsigned char* sModifyData);
	
	//修改用户区2数据，nECState: 1--EC关闭;2--EC打开.
	int __stdcall at88sc102_ua2_modifydata(HANDLE icdev,unsigned char nECState,unsigned char nAddr,unsigned char nMLen,unsigned char* sModifyData);
	
	//熔断ISSUER FUSE
	int __stdcall at88sc102_fuse_issuerfuse(HANDLE icdev);
	
	//熔断EC2EN FUSE（即无擦除次数限制）
	int __stdcall at88sc102_fuse_ec2enfuse(HANDLE icdev);

	//检查是否为102卡.0--102卡，非0--不是102卡。
	int __stdcall at88sc102_is102(HANDLE icdev,unsigned char* nCardState);


	//******************************* 密码键盘操作 *****************************************************//
	/*//指令调试接口函数
	int __stdcall dev_pwdkb(HANDLE icdev,unsigned char nTimeouts,unsigned char nRetain,unsigned char nCmdLen,unsigned char* sKBCmd,unsigned char* nRecLen,unsigned char* sRecData);
	//输入密码
	int __stdcall dev_pwdkb_getpwd(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//再次输入密码
	int __stdcall dev_pwdkb_getpwd_again(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//输入密码，加密
	int __stdcall dev_pwdkb_getpwd_encrypt(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//再次输入密码，加密
	int __stdcall dev_pwdkb_getpwd_again_encrypt(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//11-08-25 密码键盘函数更改。
	//设置密码键盘超时时间   
	int __stdcall pwdkb_settimeout(HANDLE icdev,unsigned char nTimeouts);
	//设置密码长度              
	int __stdcall pwdkb_setpwdlen(HANDLE icdev,unsigned char nPwdLen);
	//下载主密钥                
	int __stdcall pwdkb_load_mainkey(HANDLE icdev,unsigned char nDesType,unsigned char nMainKeyNo,unsigned char* sMainKey);
	//下载工作密钥              
	int __stdcall pwdkb_load_workkey(HANDLE icdev,unsigned char nDesType,unsigned char nMainKeyNo,unsigned char nWorkKeyNo,unsigned char* sWorkKey);
	//获取明文密码              
	int __stdcall pwdkb_getpwd(HANDLE icdev,unsigned char* nPwdLen,unsigned char* sPwdData);
	//获取明文密码,再次输入密码              
	int __stdcall pwdkb_getpwd_again(HANDLE icdev,unsigned char* nPwdLen,unsigned char* sPwdData);
	//获取密文密码              
	int __stdcall pwdkb_getpwd_encrypt(HANDLE icdev,unsigned char nWorkKeyNo,unsigned char* sCardNo,unsigned char* nPwdLen,unsigned char* sPwdData);
	//获取密文密码,再次输入密码              
	int __stdcall pwdkb_getpwd_again_encrypt(HANDLE icdev,unsigned char nWorkKeyNo,unsigned char* sCardNo,unsigned char* nPwdLen,unsigned char* sPwdData);*/

	//DES加密函数
	int __stdcall des_encrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//DES解密函数
	int __stdcall des_decrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//3DES加密函数
	int __stdcall des3_encrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//3Des解密函数
	int __stdcall des3_decrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);

	//密码键盘数据解密
	int __stdcall pwd_decrypt(unsigned char *ptrSource, unsigned char nDataLen,unsigned char *ptrDest);

	//客户要求的封装函数
	//打开密码键盘
	int __stdcall mw_kb_open(int port, long baud);
	//密码键盘操作关闭端口
	int __stdcall mw_kb_close(HANDLE icdev);
	//密码键盘下载主密钥
	int __stdcall mw_kb_downloadmainkey(HANDLE icdev,int destype,int mainkeyno,unsigned char *mainkey);
	//密码键盘下载工作密钥
	int __stdcall mw_kb_downloaduserkey(HANDLE icdev, int destype, int mainkeyno, int userkeyno, unsigned char *userkey);
	//密码键盘激活主密钥和工作密钥
	int __stdcall mw_kb_activekey(HANDLE icdev, int mainkeyno,int userkeyno);
	//密码键盘设置输入密码长度
	int __stdcall mw_kb_setpasslen(HANDLE icdev, int passlen);
	//密码键盘设置超时时间
	int __stdcall mw_kb_settimeout(HANDLE icdev, int timeout);
	//密码键盘获取明文密码
	int __stdcall mw_kb_getpin(HANDLE icdev, int type, unsigned char *planpin);
	//密码键盘获取密文密码
	int __stdcall mw_kb_getenpin(HANDLE icdev, int type, unsigned char *cardno, unsigned char *planpin);

	//下载工作密钥--密钥为明文
	int __stdcall mw_kb_downloaduserkey_nb(HANDLE icdev, int destype, int mainkeyno,int userkeyno, unsigned char *userkey);
	//获取密文密码  1--输入密码,2--再次输入密码
	int __stdcall mw_kb_getenpin_nb(HANDLE icdev, int type, unsigned char userkeyno, unsigned char *planpin);
	//LCD显示屏显示
	int __stdcall lcd_display_string(HANDLE icdev, int row, int column,int len, char *disp_buf);
	//LCD清屏
	int __stdcall lcd_clear(HANDLE icdev);
	//设置键盘类型 0--内置密码键盘 1--外置密码键盘
	void __stdcall set_kb_type(int type); 
	//2.4G卡通道函数
	int __stdcall ds_command_trn(HANDLE icdev,unsigned char *sCmd,unsigned short nCmdLen, unsigned char *sResp, unsigned short *nRespLen);
	
	//退卡
	int __stdcall return_card(HANDLE icdev);

	//磁闸门测试   time:打开关闭闸门的次数
	int __stdcall magnetic_gate_test(HANDLE icdev,int time);

	//电机测试    direction:电机旋转的方向    time:持续旋转的时间
	int __stdcall motor_test(HANDLE icdev,int direction,int time);

	//电动卡座老化测试   IN_OUT:0 退卡 1 进卡
	int __stdcall AGING_test(HANDLE icdev,int IN_OUT,int &status); //这个函数只能是内部使用不能提供给用户

	int __stdcall Move_Card(HANDLE icdev, int nMode); 

	//电动卡座卡片状态查询
	int __stdcall Query_status(HANDLE icdev,int &status);

	//取二代证ID号
	int __stdcall Get_CARD_ID(HANDLE icdev,unsigned char *cardid);
	int __stdcall Get_CARD_ID_hex(HANDLE icdev,unsigned char *cardid);

	//fc 20130808 获取设备状态
	int __stdcall get_device_status(HANDLE icdev,unsigned char *ndev_status);

	///////////////////////////////////////////////////////////////////////////////////////////////20140402 fc
	int __stdcall srd_1604(HANDLE icdev,int zone,int offset,int len,unsigned char *data_buffer);//读数据
	int __stdcall swr_1604(HANDLE icdev,int zone,int offset,int len,unsigned char *data_buffer);//写数据
	int __stdcall wsc_1604(HANDLE icdev,int zone,int len,unsigned char *data_buffer);//写密码
	int __stdcall ser_1604(HANDLE icdev,int zone,int offset,int len);//擦除数据
	int __stdcall csc_1604(HANDLE icdev,int zone,int len, unsigned char *data_buffer);	//校验密码
	int __stdcall cesc_1604(HANDLE icdev,int zone,int len,unsigned char *data_buffer);//校验擦除密码
	int __stdcall fakefus_1604(HANDLE icdev,int mode);//伪个人化
	int __stdcall psnl_1604(HANDLE icdev);//个人化

	int __stdcall get_barcode(HANDLE icdev, unsigned char ucTimeOuts, unsigned char *nRLen, unsigned char *barCodeData);
	int __stdcall get_barcode_continuous(HANDLE icdev, unsigned char ucTimeOuts);
	
	int __stdcall lcd_display_string2(HANDLE icdev, int row, int column,int len, char *disp_buf);
	int __stdcall lcd_display_new(HANDLE icdev, int row, int column,int len, char *disp_buf);
	int __stdcall adjusts_Brightness(HANDLE icdev,unsigned char mode);
	int __stdcall backlight_Delay(HANDLE icdev,unsigned char time);
	int __stdcall setmagic_mode(HANDLE icdev,unsigned char mode);
	int __stdcall readmagic_data(HANDLE icdev,unsigned char *track1_len,unsigned char *track1_data,unsigned char *track2_len,unsigned char *track2_data,unsigned char *track3_len,unsigned char *track3_data);

	//读取接触卡银行卡卡号和持卡人姓名
	__int16 __stdcall ICC_GetPanNoCardHldName(HANDLE icdev, unsigned char nCardSet, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);
	//读取非接触卡银行卡卡号和持卡人姓名
	__int16 __stdcall NC_GetPanNoCardHldName(HANDLE icdev, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);

	////兼容接触和非接卡
	__int16 __stdcall GetPanNoCardHldName(HANDLE icdev, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);
	int __stdcall PICC_GetStatus(HANDLE icdev, unsigned char* cardstate);
	int __stdcall PICC_GetStatus_EX(HANDLE icdev, unsigned char* cardstate);
        int __stdcall rf_antenna(HANDLE icdev, unsigned char* antennastate);
#ifdef __cplusplus
}
#endif
