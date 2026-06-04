#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF32290)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReferenceConverter_TypeDefinitionIndex = 2609;

	class ReferenceConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::System::String** StaticGet_none()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ReferenceConverter_TypeDefinitionIndex)->GetStaticField(0x23290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CCTOR_OFFSET))();
		}
	};
}
