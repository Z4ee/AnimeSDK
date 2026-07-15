#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUADLL_LUA_CSFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BE6AF0)
#define XLUA_LUADLL_LUA_CSFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BE6B40)
#define XLUA_LUADLL_LUA_CSFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BE6AE0)
#define XLUA_LUADLL_LUA_CSFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE6A70)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int lua_CSFunction_TypeDefinitionIndex = 49385;

	class lua_CSFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
