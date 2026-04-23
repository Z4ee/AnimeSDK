#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ActivityTagData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11214840)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112148A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_INVOKE_OFFSET UNITYSDK_OFFSET(0x112142E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0__CTOR_OFFSET UNITYSDK_OFFSET(0x11212B00)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE0_TypeDefinitionIndex = 46326;

	class InternalGlobals___GEN_DELEGATE0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* tags, ::System::UInt32 tagID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_INVOKE_OFFSET))(this, tags, tagID);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* tags, ::System::UInt32 tagID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_BEGININVOKE_OFFSET))(this, tags, tagID, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
