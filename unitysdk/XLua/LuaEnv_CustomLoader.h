#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_LUAENV_CUSTOMLOADER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11235DA0)
#define XLUA_LUAENV_CUSTOMLOADER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11235DD0)
#define XLUA_LUAENV_CUSTOMLOADER_INVOKE_OFFSET UNITYSDK_OFFSET(0x11235A60)
#define XLUA_LUAENV_CUSTOMLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1120D9E0)

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_CustomLoader_TypeDefinitionIndex = 46399;

	class LuaEnv_CustomLoader : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER__CTOR_OFFSET))(this, object, method);
		}

		::Il2CppArray<::System::Byte>* Invoke(::System::String*& filepath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_INVOKE_OFFSET))(this, filepath);
		}

		::System::IAsyncResult* BeginInvoke(::System::String*& filepath, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_BEGININVOKE_OFFSET))(this, filepath, callback, object);
		}

		::Il2CppArray<::System::Byte>* EndInvoke(::System::String*& filepath, ::System::IAsyncResult* result)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_CUSTOMLOADER_ENDINVOKE_OFFSET))(this, filepath, result);
		}
	};
}
