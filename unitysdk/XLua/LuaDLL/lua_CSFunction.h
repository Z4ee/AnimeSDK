#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUADLL_LUA_CSFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF67AB0)
#define XLUA_LUADLL_LUA_CSFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF67B00)
#define XLUA_LUADLL_LUA_CSFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF677C0)
#define XLUA_LUADLL_LUA_CSFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFF677A0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int lua_CSFunction_TypeDefinitionIndex = 41806;

	class lua_CSFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_INVOKE_OFFSET))(this, L);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_BEGININVOKE_OFFSET))(this, L, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_LUA_CSFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
