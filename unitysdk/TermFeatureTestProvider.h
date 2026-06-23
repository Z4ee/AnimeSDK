#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TermFeatureTestProvider_Entry.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"
#include "unitysdk/UnityEngine/UI/Extension/TermID.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TERMFEATURETESTPROVIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E386D0)
#define TERMFEATURETESTPROVIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E389F0)
#define TERMFEATURETESTPROVIDER_REBUILDLOOKUP_OFFSET UNITYSDK_OFFSET(0x19E387B0)
#define TERMFEATURETESTPROVIDER_TRYGETTERM_OFFSET UNITYSDK_OFFSET(0x19E38B60)
#define TERMFEATURETESTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38C40)

inline static constexpr unsigned int TermFeatureTestProvider_TypeDefinitionIndex = 47070;

class TermFeatureTestProvider : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::TermFeatureTestProvider_Entry>* _terms; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData>* _lookup; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_ONDESTROY_OFFSET))(this);
	}

	::System::Void RebuildLookup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_REBUILDLOOKUP_OFFSET))(this);
	}

	::System::Boolean TryGetTerm(::UnityEngine::UI::Extension::TermID termId, ::UnityEngine::UI::Extension::TermData& data)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::TermID, ::UnityEngine::UI::Extension::TermData&))((::PBYTE)hIl2Cpp + TERMFEATURETESTPROVIDER_TRYGETTERM_OFFSET))(this, termId, data);
	}
};
