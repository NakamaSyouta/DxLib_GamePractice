#include"Dxlib.h"

int WINAPI WinMain(_In_ HINSTANCE hinstance,_In_opt_ HINSTANCE haprevinstance,_In_
	LPSTR lpCmdLine,_In_ int nShowCmd)
{
	//�E�B���h�E�Y���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����[�̏���������
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	//���͑ҋ@
	WaitKey();

	//Dx���C�u�����[�g�p�̏I������
	DxLib_End();

	return 0;
}