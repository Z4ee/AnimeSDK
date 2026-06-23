#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class ReferenceConverter; }

#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_REFERENCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CEC74B0)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_REFERENCECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC74A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReferenceConverter_ReferenceComparer_TypeDefinitionIndex = 2969;

	class ReferenceConverter_ReferenceComparer : public ::System::Object
	{
	public:
		::System::ComponentModel::ReferenceConverter* converter; // 0x10

		::System::Void _ctor(::System::ComponentModel::ReferenceConverter* converter)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ReferenceConverter*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_REFERENCECOMPARER__CTOR_OFFSET))(this, converter);
		}

		::System::Int32 Compare(::System::Object* item1, ::System::Object* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_REFERENCECOMPARER_COMPARE_OFFSET))(this, item1, item2);
		}
	};
}
