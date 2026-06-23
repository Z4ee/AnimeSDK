#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/STATDATA.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1B41F6C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_NEXT_OFFSET UNITYSDK_OFFSET(0x1B41F7A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1B41FAF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_SKIP_OFFSET UNITYSDK_OFFSET(0x1B41FB30)

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int IEnumSTATDATA_TypeDefinitionIndex = 3132;

	class IEnumSTATDATA
	{
	public:
		::System::Void Clone(::System::Runtime::InteropServices::ComTypes::IEnumSTATDATA*& newEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::IEnumSTATDATA*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_CLONE_OFFSET))(this, newEnum);
		}

		::System::Int32 Next(::System::Int32 celt, ::Il2CppArray<::System::Runtime::InteropServices::ComTypes::STATDATA>* rgelt, ::Il2CppArray<::System::Int32>* pceltFetched)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Runtime::InteropServices::ComTypes::STATDATA>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_NEXT_OFFSET))(this, celt, rgelt, pceltFetched);
		}

		::System::Int32 Reset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_RESET_OFFSET))(this);
		}

		::System::Int32 Skip(::System::Int32 celt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMSTATDATA_SKIP_OFFSET))(this, celt);
		}
	};
}
