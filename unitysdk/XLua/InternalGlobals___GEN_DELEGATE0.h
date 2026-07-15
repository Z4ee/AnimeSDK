#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ActivityTagData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7E10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7E70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE7E00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE0__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE7D10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE0_TypeDefinitionIndex = 47881;

	class InternalGlobals___GEN_DELEGATE0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE0_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
