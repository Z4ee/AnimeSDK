#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace XLua { class ObjectTranslator; }

#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11743E80)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11743F10)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x11743AE0)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11743AC0)

namespace XLua
{
	inline static constexpr unsigned int StaticLuaCallbacks_ArrayIndexGetter_TypeDefinitionIndex = 46323;

	class StaticLuaCallbacks_ArrayIndexGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_INVOKE_OFFSET))(this, L, translator, obj, index);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Object* obj, ::System::Int32 index, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_BEGININVOKE_OFFSET))(this, L, translator, obj, index, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
