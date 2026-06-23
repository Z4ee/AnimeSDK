#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/Emit/ArgumentField.h"
#include "unitysdk/Utf8Json/Resolvers/Internal/DynamicObjectTypeBuilder_DeserializeInfo.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_0__BUILDDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E122650)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E122640)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass12_0_TypeDefinitionIndex = 91161;

	class DynamicObjectTypeBuilder___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>* tryEmitLoadCustomFormatter; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18
		::Utf8Json::Internal::Emit::ArgumentField argReader; // 0x20
		::Utf8Json::Internal::Emit::ArgumentField argResolver; // 0x30
		::Il2CppArray<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo>* infoList; // 0x40
		::System::Boolean isSideEffectFreeType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo _BuildDeserialize_b__0(::Utf8Json::Internal::Emit::MetaMember* item)
		{
			return ((::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_0__BUILDDESERIALIZE_B__0_OFFSET))(this, item);
		}
	};
}
