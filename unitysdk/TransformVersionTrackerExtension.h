#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TransformVersionTracker;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A68A7E0)
#define TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET UNITYSDK_OFFSET(0x1A68A0D0)
#define TRANSFORMVERSIONTRACKEREXTENSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A68A910)

inline static constexpr unsigned int TransformVersionTrackerExtension_TypeDefinitionIndex = 40529;

class TransformVersionTrackerExtension : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference_1<::TransformVersionTracker*>*>** StaticGet__TrackerDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference_1<::TransformVersionTracker*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0x3FF70);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__ToRemoveTrackerList()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0x3FF78);
	}
	static ::System::Int32* StaticGet__AllocTrackerCounter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0xE5D0);
	}
	// static const ::System::Int32 RemoveInvalidTrackerInterval = 0x3E8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION__CCTOR_OFFSET))();
	}

	static ::TransformVersionTracker* GetTracker(::UnityEngine::Transform* trans)
	{
		return ((::TransformVersionTracker*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET))(trans);
	}

	static ::System::Boolean CheckRecentlyChanged(::UnityEngine::Transform* trans)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET))(trans);
	}
};
