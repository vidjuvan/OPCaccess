// Interface.h: interface for the CInterface class.
//
// This class is a helper to use the interface pointers (Query/Release)
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INTERFACE_H)
#define AFX_INTERFACE_H

template <class I, const IID* pIID> class CInterface  
{
public:

	CInterface()
	{
		m_pI = NULL;
	}

	~CInterface()
	{
		Release();
	}

protected:
	I* m_pI;

public:

	HRESULT Query(LPUNKNOWN pIUnknown)
	{
		ASSERT(pIUnknown);
		ASSERT(m_pI==NULL);
		if (pIUnknown)
		{
			HRESULT hr = pIUnknown->QueryInterface(*pIID, (LPVOID*)&m_pI);
			if (FAILED(hr))
			{
				m_pI = NULL;
			}
			return hr;
		}
		else
		{
			return E_FAIL;
		}
	}

	void Release()
	{
		if (m_pI!=NULL)
		{
			m_pI->Release();
			m_pI = NULL;
		}
	}

	I* operator->()
	{
		ASSERT(m_pI);
		return m_pI;
	}

	I** operator&()
	{
		return &m_pI;
	}

	operator I*()
	{
		return m_pI;
	}
};

#endif
