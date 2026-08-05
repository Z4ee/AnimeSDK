#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Utf8Json/Internal/Emit/MetaMember.h"

namespace System { class String; }
namespace System::Reflection::Emit { class ILGenerator; }

#define UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER_EMITLOADVALUE_OFFSET UNITYSDK_OFFSET(0x1F536440)
#define UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER_EMITSTOREVALUE_OFFSET UNITYSDK_OFFSET(0x1F5364E0)
#define UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5363E0)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int StringConstantValueMetaMember_TypeDefinitionIndex = 95187;

	class StringConstantValueMetaMember : public ::Utf8Json::Internal::Emit::MetaMember
	{
	public:
		::System::String* constant; // 0x58

		::System::Void _ctor(::System::String* name, ::System::String* constant)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER__CTOR_OFFSET))(this, name, constant);
		}

		::System::Void EmitLoadValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER_EMITLOADVALUE_OFFSET))(this, il);
		}

		::System::Void EmitStoreValue(::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_STRINGCONSTANTVALUEMETAMEMBER_EMITSTOREVALUE_OFFSET))(this, il);
		}
	};
}
