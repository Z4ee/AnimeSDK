#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUAENV_DTORFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E96F70)
#define XLUA_LUAENV_DTORFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E96FE0)
#define XLUA_LUAENV_DTORFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E96F60)
#define XLUA_LUAENV_DTORFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12E96EF0)

namespace XLua
{
	inline static constexpr unsigned int LuaEnv_DtorFunction_TypeDefinitionIndex = 46987;

	class LuaEnv_DtorFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUAENV_DTORFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
