#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUAENV_DTORFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF6C3F0)
#define XLUA_LUAENV_DTORFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF6C460)
#define XLUA_LUAENV_DTORFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF6C0A0)
#define XLUA_LUAENV_DTORFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6BCD0)

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_DtorFunction_TypeDefinitionIndex = 40484;

	class LuaEnv_DtorFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr L, ::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_INVOKE_OFFSET))(this, L, ptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::IntPtr ptr, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_BEGININVOKE_OFFSET))(this, L, ptr, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
