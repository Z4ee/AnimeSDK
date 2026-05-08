#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/FORMATETC.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_CLONE_OFFSET UNITYSDK_OFFSET(0x1A588460)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_NEXT_OFFSET UNITYSDK_OFFSET(0x1A588540)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_RESET_OFFSET UNITYSDK_OFFSET(0x1A5887C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_SKIP_OFFSET UNITYSDK_OFFSET(0x1A588800)

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int IEnumFORMATETC_TypeDefinitionIndex = 3132;

	class IEnumFORMATETC
	{
	public:
		::System::Void Clone(::System::Runtime::InteropServices::ComTypes::IEnumFORMATETC*& newEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::IEnumFORMATETC*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_CLONE_OFFSET))(this, newEnum);
		}

		::System::Int32 Next(::System::Int32 celt, ::Il2CppArray<::System::Runtime::InteropServices::ComTypes::FORMATETC>* rgelt, ::Il2CppArray<::System::Int32>* pceltFetched)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Runtime::InteropServices::ComTypes::FORMATETC>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_NEXT_OFFSET))(this, celt, rgelt, pceltFetched);
		}

		::System::Int32 Reset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_RESET_OFFSET))(this);
		}

		::System::Int32 Skip(::System::Int32 celt)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IENUMFORMATETC_SKIP_OFFSET))(this, celt);
		}
	};
}
