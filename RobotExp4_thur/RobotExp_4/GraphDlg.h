#pragma once
#include "NTGraph.h"
#include "CNTGRAPH_POS.h"
#include "CNTGRAPH_VEL.h"
#include "CNTGRAPH_TORQ.h"

#include "SystemMemory.h"
#include "SharedMemory.h"
#include "DataType.h"
// CGraphDlg ��ȭ �����Դϴ�.

class CGraphDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CGraphDlg)

public:
	CGraphDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CGraphDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRAPH_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:

	CNTGraph m_ntgPOS;
	CNTGraph m_ntgVel;
	CNTGraph m_ntgTorque;

	virtual BOOL OnInitDialog();

private:
	void InitNTGraph();

	double m_dCnt = 0.00;


public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
