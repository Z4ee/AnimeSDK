#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSACryptoServiceProvider; }
namespace System::Security::Cryptography { class SHA1; }
namespace XLua { class LuaEnv_CustomLoader; }

#define XLUA_SIGNATURELOADER_LOAD_AND_VERIFY_OFFSET UNITYSDK_OFFSET(0x1169B4E0)
#define XLUA_SIGNATURELOADER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1169B660)
#define XLUA_SIGNATURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1169B410)

namespace XLua
{
	inline static constexpr unsigned int SignatureLoader_TypeDefinitionIndex = 46447;

	class SignatureLoader : public ::System::Object
	{
	public:
		::System::Security::Cryptography::RSACryptoServiceProvider* rsa; // 0x10
		::XLua::LuaEnv_CustomLoader* userLoader; // 0x18
		::System::Security::Cryptography::SHA1* sha; // 0x20

		::System::Void _ctor(::System::String* publicKey, ::XLua::LuaEnv_CustomLoader* loader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaEnv_CustomLoader*))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER__CTOR_OFFSET))(this, publicKey, loader);
		}

		::Il2CppArray<::System::Byte>* load_and_verify(::System::String*& filepath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER_LOAD_AND_VERIFY_OFFSET))(this, filepath);
		}

		static ::XLua::LuaEnv_CustomLoader* op_Implicit(::XLua::SignatureLoader* signatureLoader)
		{
			return ((::XLua::LuaEnv_CustomLoader*(*)(::XLua::SignatureLoader*))((::PBYTE)hIl2Cpp + XLUA_SIGNATURELOADER_OP_IMPLICIT_OFFSET))(signatureLoader);
		}
	};
}
