#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/FORMATETC.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/STGMEDIUM.h"

namespace System::Runtime::InteropServices::ComTypes { class IMoniker; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1D256B40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1D256B70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONRENAME_OFFSET UNITYSDK_OFFSET(0x1D256C10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONSAVE_OFFSET UNITYSDK_OFFSET(0x1D256CB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONVIEWCHANGE_OFFSET UNITYSDK_OFFSET(0x1D256CE0)

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int IAdviseSink_TypeDefinitionIndex = 3129;

	class IAdviseSink
	{
	public:
		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONCLOSE_OFFSET))(this);
		}

		::System::Void OnDataChange(::System::Runtime::InteropServices::ComTypes::FORMATETC& format, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM& stgmedium)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONDATACHANGE_OFFSET))(this, format, stgmedium);
		}

		::System::Void OnRename(::System::Runtime::InteropServices::ComTypes::IMoniker* moniker)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::IMoniker*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONRENAME_OFFSET))(this, moniker);
		}

		::System::Void OnSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONSAVE_OFFSET))(this);
		}

		::System::Void OnViewChange(::System::Int32 aspect, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IADVISESINK_ONVIEWCHANGE_OFFSET))(this, aspect, index);
		}
	};
}
