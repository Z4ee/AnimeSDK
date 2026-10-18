#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPoolRepository; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA7AA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA7AD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA7A90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA79A0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_B16BF775_TypeDefinitionIndex = 50104;

	class InternalGlobals___GEN_DELEGATE_B00_B16BF775 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>* Invoke(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B16BF775_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
