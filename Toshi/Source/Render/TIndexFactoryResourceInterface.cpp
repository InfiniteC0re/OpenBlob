#include "ToshiPCH.h"
#include "TIndexFactoryResourceInterface.h"

//-----------------------------------------------------------------------------
// Enables memory debugging.
// Note: Should be the last include!
//-----------------------------------------------------------------------------
#include "Core/TMemoryDebugOn.h"

TOSHI_NAMESPACE_START

TDEFINE_CLASS_NORUNTIME( TIndexFactoryResourceInterface );

// destructor
// $Barnyard: FUNCTION 006dc1a0

// $Barnyard: FUNCTION 006dc170
TIndexFactoryResourceInterface::TIndexFactoryResourceInterface()
{
	m_uiNumPools         = 0;
	m_uiMaxStaticIndices = 0;
	m_uiFlags            = 0;
}

// $Barnyard: FUNCTION 006dc1b0
TBOOL TIndexFactoryResourceInterface::Create( TIndexFactoryFormat* a_pIndexFormat, TUINT16 a_uiMaxStaticIndices, TUINT32 a_uiFlags )
{
	m_IndexFormat        = *a_pIndexFormat;
	m_uiMaxStaticIndices = a_uiMaxStaticIndices;
	m_uiFlags            = a_uiFlags;
	return TResource::Create();
}

TIndexPoolResourceInterface* TIndexFactoryResourceInterface::CreatePool( TUINT16 a_uiMaxStaticIndices, TUINT32 a_uiFlags )
{
	m_uiNumPools += 1;
	return TNULL;
}

TOSHI_NAMESPACE_END
