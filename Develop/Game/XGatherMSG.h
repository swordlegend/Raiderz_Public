#pragma once

//////////////////////////////////////////////////////////////////////////
// ���Ƶ��� ä�� ���� NPC�� ä���� �Ұ����ϸ� ���ͷ���(�÷��� false) ���� �ȵȴ�.
// �׷��� �޼��� ��¿��� Ÿ��NPC UIID�� ���
//////////////////////////////////////////////////////////////////////////

class XGatherMSG
{
public:
	XGatherMSG(void)	{}
	virtual ~XGatherMSG(void)	{}

	bool	Check(const UIID nUIID);
};