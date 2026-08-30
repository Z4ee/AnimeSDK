#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_LUAENV_CUSTOMLOADER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B2B320)
#define XLUA_LUAENV_CUSTOMLOADER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B2B350)
#define XLUA_LUAENV_CUSTOMLOADER_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B2B310)
#define XLUA_LUAENV_CUSTOMLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B2B2A0)

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_CustomLoader_TypeDefinitionIndex = 50538;

	class LuaEnv_CustomLoader : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* Invoke(::System::String*& a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String*& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* EndInvoke(::System::String*& a1, ::System::IAsyncResult* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
