#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockPropertyBuffer; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockPropertyFloat; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockPropertyMatrix; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockPropertyTexture; }
namespace UnityEngine::Rendering::Universal { class MaterialPropertyBlockPropertyVector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1DDFBD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1DDFC010)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DDFC1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1DDFBE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GET_OFFSET UNITYSDK_OFFSET(0x1DDF9A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1DDFBBC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1DDFBA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASFLOATPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDFB530)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASMATRIXPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDFB7D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDFAD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASTEXTUREPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDFB920)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASVECTORPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DDFB680)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DDFAC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC350)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC340)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockContent_TypeDefinitionIndex = 27806;

	class MaterialPropertyBlockContent : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_starts()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockContent_TypeDefinitionIndex)->GetStaticField(0x22E40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ids()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockContent_TypeDefinitionIndex)->GetStaticField(0x22E48);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyFloat*>* floats; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyVector*>* vectors; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyMatrix*>* matricies; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyTexture*>* textures; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyBuffer*>* constantBuffers; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::MaterialPropertyBlockPropertyBuffer*>* computeBuffers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT__CCTOR_OFFSET))();
		}

		::System::Void Get(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Boolean getName, ::System::Boolean getValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GET_OFFSET))(this, mpb, getName, getValue);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_RELEASE_OFFSET))(this);
		}

		::System::Boolean HasProperty(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASPROPERTY_OFFSET))(this, propertyID);
		}

		::System::Boolean HasFloatProperty(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASFLOATPROPERTY_OFFSET))(this, propertyID);
		}

		::System::Boolean HasVectorProperty(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASVECTORPROPERTY_OFFSET))(this, propertyID);
		}

		::System::Boolean HasMatrixProperty(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASMATRIXPROPERTY_OFFSET))(this, propertyID);
		}

		::System::Boolean HasTextureProperty(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASTEXTUREPROPERTY_OFFSET))(this, propertyID);
		}

		::System::Boolean HasConstantBuffer(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASCONSTANTBUFFER_OFFSET))(this, propertyID);
		}

		::System::Boolean HasComputeBuffer(::System::Int32 propertyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_HASCOMPUTEBUFFER_OFFSET))(this, propertyID);
		}

		::System::Boolean GetFloat(::System::Int32 propertyID, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETFLOAT_OFFSET))(this, propertyID, value);
		}

		::System::Boolean GetVector(::System::Int32 propertyID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETVECTOR_OFFSET))(this, propertyID, value);
		}

		::System::Boolean GetMatrix(::System::Int32 propertyID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETMATRIX_OFFSET))(this, propertyID, value);
		}

		::System::Boolean GetTexture(::System::Int32 propertyID, ::UnityEngine::Texture*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKCONTENT_GETTEXTURE_OFFSET))(this, propertyID, value);
		}
	};
}
