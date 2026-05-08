#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection::Emit { class ILGenerator; }

#define UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD_EMITLOAD_OFFSET UNITYSDK_OFFSET(0x9BDDC0)
#define UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD_EMITSTORE_OFFSET UNITYSDK_OFFSET(0x9BDDE0)
#define UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9BDCE0)
#define UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x9490B0)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int ArgumentField_TypeDefinitionIndex = 85675;

	struct alignas(8) ArgumentField
	{
		::System::Int32 i; // 0x10
		::System::Boolean ref; // 0x14
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 i, ::System::Boolean ref)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD__CTOR_OFFSET))(this, il, i, ref);
		}

		::System::Void _ctor_1(::System::Reflection::Emit::ILGenerator* il, ::System::Int32 i, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD__CTOR_1_OFFSET))(this, il, i, type);
		}

		::System::Void EmitLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD_EMITLOAD_OFFSET))(this);
		}

		::System::Void EmitStore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_ARGUMENTFIELD_EMITSTORE_OFFSET))(this);
		}
	};
}
