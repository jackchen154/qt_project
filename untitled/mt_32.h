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
	//����Ʒ���к�
	int __stdcall dev_readsnr(HANDLE icdev,unsigned char nSnrLen,char* sSnrData);
	//д��Ʒ���к�
	int __stdcall dev_writesnr(HANDLE icdev,unsigned char nSnrLen,char* sSnrData);
	//��EEPROM
	int __stdcall dev_readeeprom(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sReadData);
	//дEEPROM
	int __stdcall dev_writeeeprom(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sWriteData);
	//��ȡ��Ʒע���ʶ��
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
	//�Ӵ�ʽ������ѡ��
	int __stdcall contact_select(HANDLE icdev,unsigned char nCardType);
	int _stdcall contact_verify(HANDLE icdev, unsigned char *nCardType);
	//�ж��Ƿ�Ϊ4442��
	int __stdcall sle4442_is42( HANDLE icdev,unsigned char* sCardState );
	//��4442��
	int __stdcall sle4442_read(HANDLE icdev,unsigned char nAddr,unsigned short nDLen,unsigned char* sRecData);
	//д4442��
	int __stdcall sle4442_write(HANDLE icdev,unsigned char nAddr,unsigned short nWLen,unsigned char* sWriteData);
	//442��У������
	int __stdcall sle4442_pwd_check(HANDLE icdev,unsigned char* sKey);
	// ������
	//int __stdcall sle4442_pwd_read(HANDLE icdev,unsigned char* sKey);
	//�޸�����
	int __stdcall sle4442_pwd_modify(HANDLE icdev,unsigned char* sKey);
	//������λ
	int __stdcall sle4442_probit_read(HANDLE icdev,unsigned char* nLen,unsigned char* sProBitData);
	//д����λ
	int __stdcall sle4442_probit_write(HANDLE icdev,unsigned char nAddr,unsigned short nWLen,unsigned char*sProBitData);
	//���������
	int __stdcall sle4442_errcount_read(HANDLE icdev,unsigned char* nErrCount);
	
	//******************************* SLE4428 ********************************************************//
	//����Ƿ�Ϊ4428��
	int __stdcall sle4428_is28(HANDLE icdev,unsigned char* sCardState);
	//��4428��
	int __stdcall sle4428_read(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sRecData);
	//д4428��
	int __stdcall sle4428_write(HANDLE icdev,unsigned short nAddr,unsigned short nWLen,unsigned char* sWriteData);
	//4428��У������
	int __stdcall sle4428_pwd_check(HANDLE icdev,unsigned char* sKey);
	//�޸�����
	int __stdcall sle4428_pwd_modify(HANDLE icdev,unsigned char* sKey);
	// ������
	//int __stdcall sle4428_pwd_read(HANDLE icdev,unsigned char* sKey);
	//������λ������
	int __stdcall sle4428_probit_readdata(HANDLE icdev,unsigned short nAddr,unsigned short nDLen,unsigned char* sRecData);
	//������λд����
	int __stdcall sle4428_probit_writedata(HANDLE icdev,unsigned short nAddr,unsigned short nWLen,unsigned char*sWriteData);
	//���������
	//int __stdcall sle4428_errcount_read(HANDLE icdev,unsigned char* nErrCount);
	

	//******************************* AT88SC102 *****************************************************//
	//��Ƭ����У��
	int __stdcall at88sc102_pwd_check(HANDLE icdev,unsigned char* sKey);

	//�޸Ŀ�Ƭ����
	int __stdcall at88sc102_pwd_modify(HANDLE icdev,unsigned char* sNewKey);

	//��ȡ��Ƭ����
	int __stdcall at88sc102_pwd_read(HANDLE icdev,unsigned char* sKey);

	//�û���1��������У��
	int __stdcall at88sc102_ua1_epwd_check(HANDLE icdev,unsigned char* sKey);

	//�޸��û���1��������
	int __stdcall at88sc102_ua1_epwd_modify(HANDLE icdev,unsigned char* sNewKey);
	
	//��ȡ�û���1��������
	int __stdcall at88sc102_ua1_epwd_read(HANDLE icdev,unsigned char* sKey);
	
	//�û���2��������У��
	int __stdcall at88sc102_ua2_epwd_check(HANDLE icdev,unsigned char* sKey);
	
	//�޸��û���2��������
	int __stdcall at88sc102_ua2_epwd_modify(HANDLE icdev,unsigned char* sNewKey);
	
	//��ȡ�û���2��������
	int __stdcall at88sc102_ua2_epwd_read(HANDLE icdev,unsigned char* sKey);
	
	//��ȡ������������ֵ
	int __stdcall at88sc102_pwd_errorcount(HANDLE icdev,unsigned char* nErrorCount);
	
	//��ȡEZ2����������ֵ
	int __stdcall at88sc102_ua2_fusecount(HANDLE icdev,unsigned char* nCount);

	//�������̴���
	int __stdcall at88sc102_issuer_read(HANDLE icdev,unsigned char *sRecvData);
	
	//���·����̴���
	int __stdcall at88sc102_issuer_write(HANDLE icdev,unsigned char *sWriteData);
	
	//�����뱣����
	int __stdcall at88sc102_protect_read(HANDLE icdev,unsigned char *sRecvData);
	
	//���´��뱣����
	int __stdcall at88sc102_protect_write(HANDLE icdev,unsigned char *sWriteData);
	
	/*����λ����:д����λ1��д����λ2��������λ1��������λ2
	nProBitType:1-д����λ1;2--д����λ2;3--������λ1;4--������λ2.
	*/
	int __stdcall at88sc102_probit_clr(HANDLE icdev,unsigned char nProBitType);
	
	//���û���1ָ����ַ��ȡ����
	int __stdcall at88sc102_ua1_readdata(HANDLE icdev,unsigned char nAddr,unsigned char nRLen,unsigned char* sRecData);
	
	//���û���2ָ����ַ��ȡ����
	int __stdcall at88sc102_ua2_readdata(HANDLE icdev,unsigned char nAddr,unsigned char nRLen,unsigned char* sRecData);
	//�����û���1����
	int __stdcall at88sc102_ua1_clrdata(HANDLE icdev);
	
	//�����û���2���ݣ�nECState:1--EC�ر�,2--EC��.
	int __stdcall at88sc102_ua2_clrdata(HANDLE icdev,unsigned char nECState);
	
	//ģ���۶�
	int __stdcall at88sc102_Anafuse(HANDLE icdev);
	
	//ȡ��ģ���۶�
	int __stdcall at88sc102_Anafuse_cancel(HANDLE icdev);
	
	//�޸��û���1����
	int __stdcall at88sc102_ua1_modifydata(HANDLE icdev,unsigned char nAddr,unsigned char nMLen,unsigned char* sModifyData);
	
	//�޸��û���2���ݣ�nECState: 1--EC�ر�;2--EC��.
	int __stdcall at88sc102_ua2_modifydata(HANDLE icdev,unsigned char nECState,unsigned char nAddr,unsigned char nMLen,unsigned char* sModifyData);
	
	//�۶�ISSUER FUSE
	int __stdcall at88sc102_fuse_issuerfuse(HANDLE icdev);
	
	//�۶�EC2EN FUSE�����޲����������ƣ�
	int __stdcall at88sc102_fuse_ec2enfuse(HANDLE icdev);

	//����Ƿ�Ϊ102��.0--102������0--����102����
	int __stdcall at88sc102_is102(HANDLE icdev,unsigned char* nCardState);


	//******************************* ������̲��� *****************************************************//
	/*//ָ����Խӿں���
	int __stdcall dev_pwdkb(HANDLE icdev,unsigned char nTimeouts,unsigned char nRetain,unsigned char nCmdLen,unsigned char* sKBCmd,unsigned char* nRecLen,unsigned char* sRecData);
	//��������
	int __stdcall dev_pwdkb_getpwd(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//�ٴ���������
	int __stdcall dev_pwdkb_getpwd_again(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//�������룬����
	int __stdcall dev_pwdkb_getpwd_encrypt(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//�ٴ��������룬����
	int __stdcall dev_pwdkb_getpwd_again_encrypt(HANDLE icdev,unsigned char nTimeouts,unsigned char* nPwdLen,unsigned char* sPwdData);

	//11-08-25 ������̺������ġ�
	//����������̳�ʱʱ��   
	int __stdcall pwdkb_settimeout(HANDLE icdev,unsigned char nTimeouts);
	//�������볤��              
	int __stdcall pwdkb_setpwdlen(HANDLE icdev,unsigned char nPwdLen);
	//��������Կ                
	int __stdcall pwdkb_load_mainkey(HANDLE icdev,unsigned char nDesType,unsigned char nMainKeyNo,unsigned char* sMainKey);
	//���ع�����Կ              
	int __stdcall pwdkb_load_workkey(HANDLE icdev,unsigned char nDesType,unsigned char nMainKeyNo,unsigned char nWorkKeyNo,unsigned char* sWorkKey);
	//��ȡ��������              
	int __stdcall pwdkb_getpwd(HANDLE icdev,unsigned char* nPwdLen,unsigned char* sPwdData);
	//��ȡ��������,�ٴ���������              
	int __stdcall pwdkb_getpwd_again(HANDLE icdev,unsigned char* nPwdLen,unsigned char* sPwdData);
	//��ȡ��������              
	int __stdcall pwdkb_getpwd_encrypt(HANDLE icdev,unsigned char nWorkKeyNo,unsigned char* sCardNo,unsigned char* nPwdLen,unsigned char* sPwdData);
	//��ȡ��������,�ٴ���������              
	int __stdcall pwdkb_getpwd_again_encrypt(HANDLE icdev,unsigned char nWorkKeyNo,unsigned char* sCardNo,unsigned char* nPwdLen,unsigned char* sPwdData);*/

	//DES���ܺ���
	int __stdcall des_encrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//DES���ܺ���
	int __stdcall des_decrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//3DES���ܺ���
	int __stdcall des3_encrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);
	//3Des���ܺ���
	int __stdcall des3_decrypt(unsigned char *key,unsigned char *ptrSource, unsigned char msgLen,unsigned char *ptrDest);

	//����������ݽ���
	int __stdcall pwd_decrypt(unsigned char *ptrSource, unsigned char nDataLen,unsigned char *ptrDest);

	//�ͻ�Ҫ��ķ�װ����
	//���������
	int __stdcall mw_kb_open(int port, long baud);
	//������̲����رն˿�
	int __stdcall mw_kb_close(HANDLE icdev);
	//���������������Կ
	int __stdcall mw_kb_downloadmainkey(HANDLE icdev,int destype,int mainkeyno,unsigned char *mainkey);
	//����������ع�����Կ
	int __stdcall mw_kb_downloaduserkey(HANDLE icdev, int destype, int mainkeyno, int userkeyno, unsigned char *userkey);
	//������̼�������Կ�͹�����Կ
	int __stdcall mw_kb_activekey(HANDLE icdev, int mainkeyno,int userkeyno);
	//������������������볤��
	int __stdcall mw_kb_setpasslen(HANDLE icdev, int passlen);
	//����������ó�ʱʱ��
	int __stdcall mw_kb_settimeout(HANDLE icdev, int timeout);
	//������̻�ȡ��������
	int __stdcall mw_kb_getpin(HANDLE icdev, int type, unsigned char *planpin);
	//������̻�ȡ��������
	int __stdcall mw_kb_getenpin(HANDLE icdev, int type, unsigned char *cardno, unsigned char *planpin);

	//���ع�����Կ--��ԿΪ����
	int __stdcall mw_kb_downloaduserkey_nb(HANDLE icdev, int destype, int mainkeyno,int userkeyno, unsigned char *userkey);
	//��ȡ��������  1--��������,2--�ٴ���������
	int __stdcall mw_kb_getenpin_nb(HANDLE icdev, int type, unsigned char userkeyno, unsigned char *planpin);
	//LCD��ʾ����ʾ
	int __stdcall lcd_display_string(HANDLE icdev, int row, int column,int len, char *disp_buf);
	//LCD����
	int __stdcall lcd_clear(HANDLE icdev);
	//���ü������� 0--����������� 1--�����������
	void __stdcall set_kb_type(int type); 
	//2.4G��ͨ������
	int __stdcall ds_command_trn(HANDLE icdev,unsigned char *sCmd,unsigned short nCmdLen, unsigned char *sResp, unsigned short *nRespLen);
	
	//�˿�
	int __stdcall return_card(HANDLE icdev);

	//��բ�Ų���   time:�򿪹ر�բ�ŵĴ���
	int __stdcall magnetic_gate_test(HANDLE icdev,int time);

	//�������    direction:�����ת�ķ���    time:������ת��ʱ��
	int __stdcall motor_test(HANDLE icdev,int direction,int time);

	//�綯�����ϻ�����   IN_OUT:0 �˿� 1 ����
	int __stdcall AGING_test(HANDLE icdev,int IN_OUT,int &status); //�������ֻ�����ڲ�ʹ�ò����ṩ���û�

	int __stdcall Move_Card(HANDLE icdev, int nMode); 

	//�綯������Ƭ״̬��ѯ
	int __stdcall Query_status(HANDLE icdev,int &status);

	//ȡ����֤ID��
	int __stdcall Get_CARD_ID(HANDLE icdev,unsigned char *cardid);
	int __stdcall Get_CARD_ID_hex(HANDLE icdev,unsigned char *cardid);

	//fc 20130808 ��ȡ�豸״̬
	int __stdcall get_device_status(HANDLE icdev,unsigned char *ndev_status);

	///////////////////////////////////////////////////////////////////////////////////////////////20140402 fc
	int __stdcall srd_1604(HANDLE icdev,int zone,int offset,int len,unsigned char *data_buffer);//������
	int __stdcall swr_1604(HANDLE icdev,int zone,int offset,int len,unsigned char *data_buffer);//д����
	int __stdcall wsc_1604(HANDLE icdev,int zone,int len,unsigned char *data_buffer);//д����
	int __stdcall ser_1604(HANDLE icdev,int zone,int offset,int len);//��������
	int __stdcall csc_1604(HANDLE icdev,int zone,int len, unsigned char *data_buffer);	//У������
	int __stdcall cesc_1604(HANDLE icdev,int zone,int len,unsigned char *data_buffer);//У���������
	int __stdcall fakefus_1604(HANDLE icdev,int mode);//α���˻�
	int __stdcall psnl_1604(HANDLE icdev);//���˻�

	int __stdcall get_barcode(HANDLE icdev, unsigned char ucTimeOuts, unsigned char *nRLen, unsigned char *barCodeData);
	int __stdcall get_barcode_continuous(HANDLE icdev, unsigned char ucTimeOuts);
	
	int __stdcall lcd_display_string2(HANDLE icdev, int row, int column,int len, char *disp_buf);
	int __stdcall lcd_display_new(HANDLE icdev, int row, int column,int len, char *disp_buf);
	int __stdcall adjusts_Brightness(HANDLE icdev,unsigned char mode);
	int __stdcall backlight_Delay(HANDLE icdev,unsigned char time);
	int __stdcall setmagic_mode(HANDLE icdev,unsigned char mode);
	int __stdcall readmagic_data(HANDLE icdev,unsigned char *track1_len,unsigned char *track1_data,unsigned char *track2_len,unsigned char *track2_data,unsigned char *track3_len,unsigned char *track3_data);

	//��ȡ�Ӵ������п����źͳֿ�������
	__int16 __stdcall ICC_GetPanNoCardHldName(HANDLE icdev, unsigned char nCardSet, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);
	//��ȡ�ǽӴ������п����źͳֿ�������
	__int16 __stdcall NC_GetPanNoCardHldName(HANDLE icdev, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);

	////���ݽӴ��ͷǽӿ�
	__int16 __stdcall GetPanNoCardHldName(HANDLE icdev, unsigned char *sPanNo, unsigned short *nPanNoLen, unsigned char *sCardHldName, unsigned short *nCardHldNameLen);
	int __stdcall PICC_GetStatus(HANDLE icdev, unsigned char* cardstate);
	int __stdcall PICC_GetStatus_EX(HANDLE icdev, unsigned char* cardstate);
        int __stdcall rf_antenna(HANDLE icdev, unsigned char* antennastate);
#ifdef __cplusplus
}
#endif
