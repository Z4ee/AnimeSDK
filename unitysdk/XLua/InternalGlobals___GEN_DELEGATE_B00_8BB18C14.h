#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA6A30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA6A60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA6A20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA6930)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_8BB18C14_TypeDefinitionIndex = 50160;

	class InternalGlobals___GEN_DELEGATE_B00_8BB18C14 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Invoke(::RPG::Client::Pet::IPetInstanceRepository* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPetInstanceRepository* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BB18C14_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
