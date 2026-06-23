#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTCLASS_OFFSET UNITYSDK_OFFSET(0x1D1AD920)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTENUM_OFFSET UNITYSDK_OFFSET(0x1D1AC9B0)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D1AD8B0)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D1ADCE0)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1D1AB3F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int CodeGenPrivate_TypeDefinitionIndex = 27754;

	class CodeGenPrivate : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum* ConstructEnum(::UnrealTypes::EnumParams* params)
		{
			return ((::UnrealTypes::Enum*(*)(::UnrealTypes::EnumParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTENUM_OFFSET))(params);
		}

		static ::System::Void ConstructScriptStruct(::UnrealTypes::ScriptStruct*& outScriptStruct, ::UnrealTypes::StructParams* params)
		{
			return ((::System::Void(*)(::UnrealTypes::ScriptStruct*&, ::UnrealTypes::StructParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTSCRIPTSTRUCT_OFFSET))(outScriptStruct, params);
		}

		static ::UnrealTypes::Class* ConstructClass(::UnrealTypes::ClassParams* params)
		{
			return ((::UnrealTypes::Class*(*)(::UnrealTypes::ClassParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTCLASS_OFFSET))(params);
		}

		static ::System::Void ConstructProperties(::UnrealTypes::IFieldVariant* outer, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* properties)
		{
			return ((::System::Void(*)(::UnrealTypes::IFieldVariant*, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTIES_OFFSET))(outer, properties);
		}

		static ::System::Void ConstructProperty(::UnrealTypes::IFieldVariant* outer, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* properties, ::System::Int32& propertyIndex)
		{
			return ((::System::Void(*)(::UnrealTypes::IFieldVariant*, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTY_OFFSET))(outer, properties, propertyIndex);
		}
	};
}
