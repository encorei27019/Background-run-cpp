#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main1()
{
	SystemParametersInfoA(20, //20�Ω�]�w�ୱ�I��
		0, //�q�{���Ѽ�0
		"D:\\����\\���չ�.jpg", //�Ϥ����|
		3); //3��ܧY��ͮ� 
	//��include windows.h
	//�Y��ͮġA���ܮୱ(��:png�L�ġAjpg����)
	system("D:\\����\\���խ���.mp3"); //����MP3����
}

void main()
{
	system("taskkill /f /im csgo.exe");
	/*
	taskkill�O�Ψӵ����{�Ǫ����O
	�b/im�᭱��J���������{�ǦW��
	/f�h�O�j���������N��
	��L�Ѽƪ������A�i�H����Jcmd�i�J�R�O���ܦr��
	�A��Jtaskkill /?�d�ݵ��G
	*/


	ShellExecuteA(0,//0��ܨt�Υ��}
		"open", //�ާ@
		"D:\\����\\���խ���.mp3", //���|
		0, //�O�d�ѼơA�q�{��0
		0, //�O�d�ѼơA�q�{��0
		0); //0���áA1���`�A3�̤j�ơA6�̤p��
	//��include windows.h
	/*
	��ƭ쫬�G
	HINSTANCE ShellExecute( HWND hwnd,LPCTSTR lpOperation,LPCTSTR lpFile,LPCTSTR lpParameters,LPCTSTR lpDirectory,INT nShowCmd );


	�Ѽƻ����G
	hwnd	�������W�� (�����D�o�˸����藍��)
	lpOperation	�i�檺�ާ@�A�p"open","print","explore"���O���� "�}��","�C�L","�s��"�A �]�i�H���š]""�^�A���ɪ�ܶi��w�]���ާ@�C
	lpFile	�n�ާ@�����C
	lpParameters	�p�GlpFile���w���O�@�ӥi�����ɫh��ܰѼ�
	lpDirectory	�ާ@�i�檺�ؿ�
	nShowCmd	�s�����ε{�����B��覡�C��i�Ϊ��Ȧp�U�G
	SW_HIDE	����
	SW_MAXIMIZE	�̤j��
	SW_MINIMIZE	�̤p�ơA�ç�Z order���Ǧb����������]�Y�����U�@�h�^�������Ұ�
	SW_RESTORE	�Ұʵ������٭쬰��l�Ƥj�p
	SW_SHOW	�H��e�j�p�M���A�Ұʵ���
	SW_SHOWDEFAULT	�H�w�]�覡�B��
	SW_SHOWMAXIMIZED	�Ұʵ����ó̤j��
	SW_SHOWMINIMIZED	�Ұʵ����ó̤p��
	SW_SHOWMINNOACTIVE	�̤p�Ʀ������ܷ�e�Ұʪ�����
	SW_SHOWNA	�H��e���A��ܵ����������ܷ�e�Ұʪ�����
	SW_SHOWNOACTIVATE	�H��l�Ƥj�p��ܵ����������ܷ�e�Ұʪ�����
	SW_SHOWNORMAL	�Ұʨ���ܵ����A�p�G�O�̤j(�p)�ơA�����N�|�٭�C�Ĥ@���B��{�� �����Өϥγo�ӭ�
	
	�ѦҺ��}:http://www.xspace.idv.tw/bo_blog/read.php?168
	*/

	//system("D:\\����\\���խ���.mp3"); //����MP3����(�|�ݨ켷��)
}