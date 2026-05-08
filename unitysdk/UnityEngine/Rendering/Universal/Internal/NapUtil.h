#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19112110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ASUINT_OFFSET UNITYSDK_OFFSET(0x19112150)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_BATCHNULLCHECK_OFFSET UNITYSDK_OFFSET(0x19111A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_BLITQUAD_OFFSET UNITYSDK_OFFSET(0x191111E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_COMPUTELINEARDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0x191110C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_COMPUTEPIXELCOORDTOWORLDSPACEVIEWDIRECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x19111560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_DIVROUNDUP_OFFSET UNITYSDK_OFFSET(0x19110FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ENCODEBYTETOFLOAT_OFFSET UNITYSDK_OFFSET(0x19112020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ENCODEFLOATARRAYTOVECTOR4_OFFSET UNITYSDK_OFFSET(0x19111AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_EXTRACTBYTEFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x191120A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GETBLITMATERIAL_OFFSET UNITYSDK_OFFSET(0x191113B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GETSCALEANDBIASFORLINEARDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0x19111030)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GET_MAXUINTASFLOAT_OFFSET UNITYSDK_OFFSET(0x19111020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_PROJECTIONMATRIXASPECT_OFFSET UNITYSDK_OFFSET(0x19111510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x191121A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL__ENCODEFLOATARRAYTOVECTOR4_G__ENCODEFLOATTOUINT8_14_0_OFFSET UNITYSDK_OFFSET(0x19111F80)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapUtil_TypeDefinitionIndex = 30479;

	class NapUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_PropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(NapUtil_TypeDefinitionIndex)->GetStaticField(0x24420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Int32 DivRoundUp(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_DIVROUNDUP_OFFSET))(x, y);
		}

		static ::System::Single get_MaxUIntAsFloat()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GET_MAXUINTASFLOAT_OFFSET))();
		}

		static ::System::Void GetScaleAndBiasForLinearDistanceFade(::System::Single fadeDistance, ::System::Single& scale, ::System::Single& bias)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GETSCALEANDBIASFORLINEARDISTANCEFADE_OFFSET))(fadeDistance, scale, bias);
		}

		static ::System::Single ComputeLinearDistanceFade(::System::Single distanceToCamera, ::System::Single fadeDistance)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_COMPUTELINEARDISTANCEFADE_OFFSET))(distanceToCamera, fadeDistance);
		}

		static ::System::Void BlitQuad(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* source, ::UnityEngine::Vector4 scaleBiasTex, ::UnityEngine::Vector4 scaleBiasRT, ::System::Int32 mipLevelTex, ::System::Boolean bilinear)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_BLITQUAD_OFFSET))(cmd, source, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear);
		}

		static ::UnityEngine::Material* GetBlitMaterial(::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean singleSlice)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Rendering::TextureDimension, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_GETBLITMATERIAL_OFFSET))(dimension, singleSlice);
		}

		static ::System::Single ProjectionMatrixAspect(::UnityEngine::Matrix4x4& matrix)
		{
			return ((::System::Single(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_PROJECTIONMATRIXASPECT_OFFSET))(matrix);
		}

		static ::UnityEngine::Matrix4x4 ComputePixelCoordToWorldSpaceViewDirectionMatrix(::System::Single verticalFoV, ::UnityEngine::Vector2 lensShift, ::UnityEngine::Vector4 screenSize, ::UnityEngine::Matrix4x4 worldToViewMatrix, ::System::Boolean renderToCubemap, ::System::Single aspectRatio)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Matrix4x4, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_COMPUTEPIXELCOORDTOWORLDSPACEVIEWDIRECTIONMATRIX_OFFSET))(verticalFoV, lensShift, screenSize, worldToViewMatrix, renderToCubemap, aspectRatio);
		}

		static ::System::Void BatchNullCheck(::System::Collections::Generic::List_1<::UnityEngine::Object*>* objects, ::Unity::Collections::NativeList_1<::System::Boolean> result)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::Unity::Collections::NativeList_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_BATCHNULLCHECK_OFFSET))(objects, result);
		}

		static ::UnityEngine::Vector4 EncodeFloatArrayToVector4(::Il2CppArray<::System::Single>* array)
		{
			return ((::UnityEngine::Vector4(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ENCODEFLOATARRAYTOVECTOR4_OFFSET))(array);
		}

		static ::System::Single EncodeByteToFloat(::System::Single dest, ::System::UInt32 data, ::System::Int32 index)
		{
			return ((::System::Single(*)(::System::Single, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ENCODEBYTETOFLOAT_OFFSET))(dest, data, index);
		}

		static ::System::UInt32 ExtractByteFromFloat(::System::Single dest, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_EXTRACTBYTEFROMFLOAT_OFFSET))(dest, index);
		}

		static ::System::Single AsFloat(::System::UInt32 uintValue)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ASFLOAT_OFFSET))(uintValue);
		}

		static ::System::UInt32 AsUInt(::System::Single floatValue)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL_ASUINT_OFFSET))(floatValue);
		}

		static ::System::Single _EncodeFloatArrayToVector4_g__EncodeFloatToUInt8_14_0(::System::Single v0, ::System::Single v1, ::System::Single v2, ::System::Single v3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPUTIL__ENCODEFLOATARRAYTOVECTOR4_G__ENCODEFLOATTOUINT8_14_0_OFFSET))(v0, v1, v2, v3);
		}
	};
}
