#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA74EC0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr_TypeDefinitionIndex = 95081;

	class DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_FormatterType()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr_TypeDefinitionIndex)->GetStaticField(0x52D20);
		}
		static ::System::Reflection::MethodInfo** StaticGet_Arguments()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonFormatterAttr_TypeDefinitionIndex)->GetStaticField(0x52D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONFORMATTERATTR__CCTOR_OFFSET))();
		}
	};
}
