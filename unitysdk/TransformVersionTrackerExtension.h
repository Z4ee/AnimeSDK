#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TransformVersionTracker;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F4A40)
#define TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET UNITYSDK_OFFSET(0x1D2F4270)
#define TRANSFORMVERSIONTRACKEREXTENSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4B70)

inline static constexpr unsigned int TransformVersionTrackerExtension_TypeDefinitionIndex = 43782;

class TransformVersionTrackerExtension : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__ToRemoveTrackerList()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0x182D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference_1<::TransformVersionTracker*>*>** StaticGet__TrackerDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::WeakReference_1<::TransformVersionTracker*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0x182D8);
	}
	static ::System::Int32* StaticGet__AllocTrackerCounter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TransformVersionTrackerExtension_TypeDefinitionIndex)->GetStaticField(0x8DA0);
	}
	// static const ::System::Int32 RemoveInvalidTrackerInterval = 0x3E8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION__CCTOR_OFFSET))();
	}

	static ::TransformVersionTracker* GetTracker(::UnityEngine::Transform* a1)
	{
		return ((::TransformVersionTracker*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_GETTRACKER_OFFSET))(a1);
	}

	static ::System::Boolean CheckRecentlyChanged(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKEREXTENSION_CHECKRECENTLYCHANGED_OFFSET))(a1);
	}
};
