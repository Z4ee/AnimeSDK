#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSACryptoServiceProvider; }
namespace System::Security::Cryptography { class SHA1; }
namespace XLua { class LuaEnv_CustomLoader; }

#define XLUA_SIGNATURELOADER_LOAD_AND_VERIFY_OFFSET UNITYSDK_OFFSET(0xFA013F0)
#define XLUA_SIGNATURELOADER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFA01580)
#define XLUA_SIGNATURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xFA01320)

namespace XLua
{
	inline static constexpr unsigned int SignatureLoader_TypeDefinitionIndex = 50586;

	class SignatureLoader : public ::System::Object
	{
	public:
		::System::Security::Cryptography::RSACryptoServiceProvider* rsa; // 0x10
		::System::Security::Cryptography::SHA1* sha; // 0x18
		::XLua::LuaEnv_CustomLoader* userLoader; // 0x20

		::System::Void _ctor(::System::String* a1, ::XLua::LuaEnv_CustomLoader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaEnv_CustomLoader*))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* load_and_verify(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER_LOAD_AND_VERIFY_OFFSET))(this, a1);
		}

		static ::XLua::LuaEnv_CustomLoader* op_Implicit(::XLua::SignatureLoader* a1)
		{
			return ((::XLua::LuaEnv_CustomLoader*(*)(::XLua::SignatureLoader*))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
