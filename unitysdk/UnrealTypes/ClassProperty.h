#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/ObjectProperty.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_CLASSPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382BE0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassProperty_TypeDefinitionIndex = 28382;

	class ClassProperty : public ::UnrealTypes::ObjectProperty
	{
	public:
		::UnrealTypes::Class* MetaClass; // 0x60

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ClassPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ClassPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPROPERTY__CTOR_OFFSET))(this, owner, prop);
		}
	};
}
