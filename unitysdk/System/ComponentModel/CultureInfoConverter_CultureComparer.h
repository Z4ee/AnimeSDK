#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class CultureInfoConverter; }

#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTURECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D229350)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTURECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D229340)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CultureInfoConverter_CultureComparer_TypeDefinitionIndex = 2846;

	class CultureInfoConverter_CultureComparer : public ::System::Object
	{
	public:
		::System::ComponentModel::CultureInfoConverter* converter; // 0x10

		::System::Void _ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CultureInfoConverter*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTURECOMPARER__CTOR_OFFSET))(this, cultureConverter);
		}

		::System::Int32 Compare(::System::Object* item1, ::System::Object* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CULTURECOMPARER_COMPARE_OFFSET))(this, item1, item2);
		}
	};
}
