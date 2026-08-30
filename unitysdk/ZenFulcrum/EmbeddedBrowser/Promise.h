#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PromiseState.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/Promise_ResolveHandler.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/RejectHandler.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ZenFulcrum::EmbeddedBrowser { class ExceptionEventArgs; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromise; }
namespace ZenFulcrum::EmbeddedBrowser { class IPromiseInfo; }
namespace ZenFulcrum::EmbeddedBrowser { class IRejectable; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class IPromise_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0x1EFA3670)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFA2AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFA2BD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EFA2420)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET UNITYSDK_OFFSET(0x1EFA3D80)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET UNITYSDK_OFFSET(0x1EFA3D20)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET UNITYSDK_OFFSET(0x1EFA3400)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET UNITYSDK_OFFSET(0x1EFA2E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET UNITYSDK_OFFSET(0x1EFA3520)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET UNITYSDK_OFFSET(0x1EFA35D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET UNITYSDK_OFFSET(0x1EFA3220)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x1EFA2540)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1EFA25E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EFA25A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EFA25C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET UNITYSDK_OFFSET(0x1EFA2E70)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFA2CE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x1EFA2F50)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFA2DA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EFA44E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET UNITYSDK_OFFSET(0x1EFA4340)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET UNITYSDK_OFFSET(0x1EFA42E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET UNITYSDK_OFFSET(0x1EFA4480)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET UNITYSDK_OFFSET(0x1EFA2910)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EFA24B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET UNITYSDK_OFFSET(0x1EFA3F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1EFA2FF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1EFA4080)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1EFA4020)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1EFA25F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1EFA25B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EFA25D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET UNITYSDK_OFFSET(0x1EFA3C60)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET UNITYSDK_OFFSET(0x1EFA4220)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1EFA3F60)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET UNITYSDK_OFFSET(0x1EFA35C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET UNITYSDK_OFFSET(0x1EFA3B10)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET UNITYSDK_OFFSET(0x1EFA32D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET UNITYSDK_OFFSET(0x1EFA3B00)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET UNITYSDK_OFFSET(0x1EFA4610)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET UNITYSDK_OFFSET(0x1EFA3650)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA2340)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFA2710)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA2600)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET UNITYSDK_OFFSET(0x1EFA4A40)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET UNITYSDK_OFFSET(0x1EFA4AA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EFA4B00)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EFA48C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x1EFA48A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET UNITYSDK_OFFSET(0x1EFA48B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_TypeDefinitionIndex = 38248;

	class Promise : public ::System::Object
	{
	public:
		static ::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>** StaticGet_unhandlerException()
		{
			return (::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x3F770);
		}
		static ::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>** StaticGet_pendingPromises()
		{
			return (::System::Collections::Generic::HashSet_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0x3F778);
		}
		static ::System::Boolean* StaticGet_EnablePromiseTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0xF4E0);
		}
		static ::System::Int32* StaticGet_nextPromiseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Promise_TypeDefinitionIndex)->GetStaticField(0xF4E4);
		}
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::RejectHandler>* rejectHandlers; // 0x10
		::System::Exception* rejectionException; // 0x18
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler>* resolveHandlers; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::ZenFulcrum::EmbeddedBrowser::PromiseState _CurState_k__BackingField; // 0x30
		::System::Int32 _Id_k__BackingField; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Action*, ::System::Action_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void add_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADD_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnhandledException(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>* a1)
		{
			return ((::System::Void(*)(::System::EventHandler_1<::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>* GetPendingPromises()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromiseInfo*>*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GETPENDINGPROMISES_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_NAME_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::PromiseState get_CurState()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::PromiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_GET_CURSTATE_OFFSET))(this);
		}

		::System::Void set_CurState(::ZenFulcrum::EmbeddedBrowser::PromiseState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::PromiseState))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SET_CURSTATE_OFFSET))(this, a1);
		}

		::System::Void AddRejectHandler(::System::Action_1<::System::Exception*>* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDREJECTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void AddResolveHandler(::System::Action* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ADDRESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void InvokeRejectHandler(::System::Action_1<::System::Exception*>* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InvokeResolveHandler(::System::Action* a1, ::ZenFulcrum::EmbeddedBrowser::IRejectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::ZenFulcrum::EmbeddedBrowser::IRejectable*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CLEARHANDLERS_OFFSET))(this);
		}

		::System::Void InvokeRejectHandlers(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKEREJECTHANDLERS_OFFSET))(this, a1);
		}

		::System::Void InvokeResolveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_INVOKERESOLVEHANDLERS_OFFSET))(this);
		}

		::System::Void Reject(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECT_OFFSET))(this, a1);
		}

		::System::Void Resolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVE_OFFSET))(this);
		}

		::System::Void Done(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_OFFSET))(this, a1, a2);
		}

		::System::Void Done_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_1_OFFSET))(this, a1);
		}

		::System::Void Done_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_DONE_2_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* WithName(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_WITHNAME_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Catch(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_CATCH_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_1(::System::Action* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_1_OFFSET))(this, a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_2(::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_2_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* Then_3(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THEN_3_OFFSET))(this, a1, a2);
		}

		::System::Void ActionHandlers(::ZenFulcrum::EmbeddedBrowser::IRejectable* a1, ::System::Action* a2, ::System::Action_1<::System::Exception*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ACTIONHANDLERS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENALL_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* All_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_ALL_1_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENSEQUENCE_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Sequence_1(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_SEQUENCE_1_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::PVOID, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_THENRACE_OFFSET))(this, a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::Il2CppArray<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Race_1(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Collections::Generic::IEnumerable_1<::ZenFulcrum::EmbeddedBrowser::IPromise*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RACE_1_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Resolved()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_RESOLVED_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::IPromise* Rejected(::System::Exception* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::IPromise*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_REJECTED_OFFSET))(a1);
		}

		static ::System::Void PropagateUnhandledException(::System::Object* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_PROPAGATEUNHANDLEDEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* ToWaitFor(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE_TOWAITFOR_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_0_OFFSET))(this);
		}

		::System::Void __ctor_b__26_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE___CTOR_B__26_1_OFFSET))(this, a1);
		}

		::System::Void _InvokeResolveHandlers_b__33_0(::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Promise_ResolveHandler))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__INVOKERESOLVEHANDLERS_B__33_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__36_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__36_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__37_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__37_0_OFFSET))(this, a1);
		}

		::System::Void _Done_b__38_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_PROMISE__DONE_B__38_0_OFFSET))(this, a1);
		}
	};
}
