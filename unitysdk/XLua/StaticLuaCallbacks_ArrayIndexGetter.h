#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace XLua { class ObjectTranslator; }

#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCDDFB90)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCDDFC20)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0xCDDFB60)
#define XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDDFAF0)

namespace XLua
{
	inline static constexpr unsigned int StaticLuaCallbacks_ArrayIndexGetter_TypeDefinitionIndex = 50591;

	class StaticLuaCallbacks_ArrayIndexGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::XLua::ObjectTranslator* a2, ::System::Object* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::XLua::ObjectTranslator* a2, ::System::Object* a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Object*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_STATICLUACALLBACKS_ARRAYINDEXGETTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
