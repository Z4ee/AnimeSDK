#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace XLua { class ObjectTranslator_ExtraParameter; }

#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1034EA60)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1034EAE0)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1034B800)
#define XLUA_OBJECTTRANSLATOR_GETCSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1034EA40)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_GetCSObject_TypeDefinitionIndex = 40397;

	class ObjectTranslator_GetCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::IntPtr L, ::System::Int32 idx, ::XLua::ObjectTranslator_ExtraParameter* mparameter)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::XLua::ObjectTranslator_ExtraParameter*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_INVOKE_OFFSET))(this, L, idx, mparameter);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr L, ::System::Int32 idx, ::XLua::ObjectTranslator_ExtraParameter* mparameter, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::XLua::ObjectTranslator_ExtraParameter*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_BEGININVOKE_OFFSET))(this, L, idx, mparameter, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_GETCSOBJECT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
