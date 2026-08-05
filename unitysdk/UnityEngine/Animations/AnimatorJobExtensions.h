#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1FC3BF80)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FC3BF50)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC3BF10)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1FC3BEB0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FC3BE60)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC3BE00)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FC3BFB0)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC3BF40)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FC3BF00)
#define UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC3BE50)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimatorJobExtensions_TypeDefinitionIndex = 6694;

	class AnimatorJobExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Animations::TransformStreamHandle BindStreamTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Animations::TransformStreamHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMTRANSFORM_OFFSET))(animator, transform);
		}

		static ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property)
		{
			return ((::UnityEngine::Animations::PropertyStreamHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_OFFSET))(animator, transform, type, property);
		}

		static ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty_1(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property, ::System::Boolean isObjectReference)
		{
			return ((::UnityEngine::Animations::PropertyStreamHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSTREAMPROPERTY_1_OFFSET))(animator, transform, type, property, isObjectReference);
		}

		static ::UnityEngine::Animations::TransformSceneHandle BindSceneTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Animations::TransformSceneHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENETRANSFORM_OFFSET))(animator, transform);
		}

		static ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property)
		{
			return ((::UnityEngine::Animations::PropertySceneHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_OFFSET))(animator, transform, type, property);
		}

		static ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty_1(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property, ::System::Boolean isObjectReference)
		{
			return ((::UnityEngine::Animations::PropertySceneHandle(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_BINDSCENEPROPERTY_1_OFFSET))(animator, transform, type, property, isObjectReference);
		}

		static ::System::Void InternalBindStreamTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::UnityEngine::Animations::TransformStreamHandle& transformStreamHandle)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Animations::TransformStreamHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMTRANSFORM_OFFSET))(animator, transform, transformStreamHandle);
		}

		static ::System::Void InternalBindStreamProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property, ::System::Boolean isObjectReference, ::UnityEngine::Animations::PropertyStreamHandle& propertyStreamHandle)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::UnityEngine::Animations::PropertyStreamHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSTREAMPROPERTY_OFFSET))(animator, transform, type, property, isObjectReference, propertyStreamHandle);
		}

		static ::System::Void InternalBindSceneTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::UnityEngine::Animations::TransformSceneHandle& transformSceneHandle)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Animations::TransformSceneHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENETRANSFORM_OFFSET))(animator, transform, transformSceneHandle);
		}

		static ::System::Void InternalBindSceneProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::System::String* property, ::System::Boolean isObjectReference, ::UnityEngine::Animations::PropertySceneHandle& propertySceneHandle)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::System::Boolean, ::UnityEngine::Animations::PropertySceneHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATORJOBEXTENSIONS_INTERNALBINDSCENEPROPERTY_OFFSET))(animator, transform, type, property, isObjectReference, propertySceneHandle);
		}
	};
}
