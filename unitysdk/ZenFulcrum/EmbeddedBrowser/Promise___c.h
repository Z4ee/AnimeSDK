#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72F390)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72F3D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__SEQUENCE_B__54_0_OFFSET UNITYSDK_OFFSET(0x1E72F3E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E72F490)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_1_OFFSET UNITYSDK_OFFSET(0x1E72F4A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise___c_TypeDefinitionIndex = 32738;

	class Promise___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::Promise___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Promise___c**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x270A0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__63_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x270A8);
		}
		static ::System::Func_3<::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::ZenFulcrum::EmbeddedBrowser::IPromise*>** StaticGet___9__54_0()
		{
			return (::System::Func_3<::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::ZenFulcrum::EmbeddedBrowser::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x270B0);
		}
		static ::System::Action** StaticGet___9__63_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Promise___c_TypeDefinitionIndex)->GetStaticField(0x270B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__CTOR_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* _Sequence_b__54_0(::ZenFulcrum::EmbeddedBrowser::IPromise* prevPromise, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* fn)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IPromise*, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__SEQUENCE_B__54_0_OFFSET))(this, prevPromise, fn);
		}

		::System::Void _ToWaitFor_b__63_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_0_OFFSET))(this);
		}

		::System::Void _ToWaitFor_b__63_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___C__TOWAITFOR_B__63_1_OFFSET))(this, ex);
		}
	};
}
