#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/ADVF.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/DATADIR.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/FORMATETC.h"
#include "unitysdk/System/Runtime/InteropServices/ComTypes/STGMEDIUM.h"

namespace System::Runtime::InteropServices::ComTypes { class IAdviseSink; }
namespace System::Runtime::InteropServices::ComTypes { class IEnumFORMATETC; }
namespace System::Runtime::InteropServices::ComTypes { class IEnumSTATDATA; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_DADVISE_OFFSET UNITYSDK_OFFSET(0x19238FA0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_DUNADVISE_OFFSET UNITYSDK_OFFSET(0x19239070)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_ENUMDADVISE_OFFSET UNITYSDK_OFFSET(0x192390B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_ENUMFORMATETC_OFFSET UNITYSDK_OFFSET(0x192391A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETCANONICALFORMATETC_OFFSET UNITYSDK_OFFSET(0x19239270)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETDATAHERE_OFFSET UNITYSDK_OFFSET(0x192393B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETDATA_OFFSET UNITYSDK_OFFSET(0x192392C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_QUERYGETDATA_OFFSET UNITYSDK_OFFSET(0x19239500)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x19239550)

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int IDataObject_TypeDefinitionIndex = 3131;

	class IDataObject
	{
	public:
		::System::Int32 DAdvise(::System::Runtime::InteropServices::ComTypes::FORMATETC& pFormatetc, ::System::Runtime::InteropServices::ComTypes::ADVF advf, ::System::Runtime::InteropServices::ComTypes::IAdviseSink* adviseSink, ::System::Int32& connection)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::ADVF, ::System::Runtime::InteropServices::ComTypes::IAdviseSink*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_DADVISE_OFFSET))(this, pFormatetc, advf, adviseSink, connection);
		}

		::System::Void DUnadvise(::System::Int32 connection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_DUNADVISE_OFFSET))(this, connection);
		}

		::System::Int32 EnumDAdvise(::System::Runtime::InteropServices::ComTypes::IEnumSTATDATA*& enumAdvise)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::IEnumSTATDATA*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_ENUMDADVISE_OFFSET))(this, enumAdvise);
		}

		::System::Runtime::InteropServices::ComTypes::IEnumFORMATETC* EnumFormatEtc(::System::Runtime::InteropServices::ComTypes::DATADIR direction)
		{
			return ((::System::Runtime::InteropServices::ComTypes::IEnumFORMATETC*(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::DATADIR))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_ENUMFORMATETC_OFFSET))(this, direction);
		}

		::System::Int32 GetCanonicalFormatEtc(::System::Runtime::InteropServices::ComTypes::FORMATETC& formatIn, ::System::Runtime::InteropServices::ComTypes::FORMATETC& formatOut)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::FORMATETC&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETCANONICALFORMATETC_OFFSET))(this, formatIn, formatOut);
		}

		::System::Void GetData(::System::Runtime::InteropServices::ComTypes::FORMATETC& format, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM& medium)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETDATA_OFFSET))(this, format, medium);
		}

		::System::Void GetDataHere(::System::Runtime::InteropServices::ComTypes::FORMATETC& format, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM& medium)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_GETDATAHERE_OFFSET))(this, format, medium);
		}

		::System::Int32 QueryGetData(::System::Runtime::InteropServices::ComTypes::FORMATETC& format)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_QUERYGETDATA_OFFSET))(this, format);
		}

		::System::Void SetData(::System::Runtime::InteropServices::ComTypes::FORMATETC& formatIn, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM& medium, ::System::Boolean release)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::ComTypes::FORMATETC&, ::System::Runtime::InteropServices::ComTypes::STGMEDIUM&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDATAOBJECT_SETDATA_OFFSET))(this, formatIn, medium, release);
		}
	};
}
