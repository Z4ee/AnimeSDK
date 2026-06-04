#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace XLua { class ObjectTranslator_ExtraParameter; }

#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x132BD950)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x132BD9D0)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x132BA980)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x132BD8E0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_GetCSObject_TypeDefinitionIndex = 46896;

	class ObjectTranslator_GetCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::IntPtr a1, ::System::Int32 a2, ::XLua::ObjectTranslator_ExtraParameter* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::XLua::ObjectTranslator_ExtraParameter*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::XLua::ObjectTranslator_ExtraParameter* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::XLua::ObjectTranslator_ExtraParameter*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
