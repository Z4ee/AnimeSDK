#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BindlessTextureArray; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeBufferArray; }
namespace UnityEngine { class ConstantBufferArray; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET UNITYSDK_OFFSET(0x18A183E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET UNITYSDK_OFFSET(0x18A18380)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET UNITYSDK_OFFSET(0x18A182F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x18A182A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET UNITYSDK_OFFSET(0x18A18490)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET UNITYSDK_OFFSET(0x18A18400)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18A18510)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A184D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET UNITYSDK_OFFSET(0x18A18360)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET UNITYSDK_OFFSET(0x18A18300)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x18A18880)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A18870)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET UNITYSDK_OFFSET(0x18A1A240)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET UNITYSDK_OFFSET(0x18A1A2C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET UNITYSDK_OFFSET(0x18A1A0C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x18A1A000)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET UNITYSDK_OFFSET(0x18A19EF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET UNITYSDK_OFFSET(0x18A19F70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET UNITYSDK_OFFSET(0x18A19D70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x18A19C80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x18A18840)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18850)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A18FD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A187F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x18A18B10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18810)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x18A18DB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18800)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x18A18C60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A18F20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x18A188A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET UNITYSDK_OFFSET(0x18A1A330)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x18A188B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x18A1A4F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A185F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x18A185B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x18A198C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x18A19880)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x18A187C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18790)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19A60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A19BC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A19BF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x18A19A10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x18A18550)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x18A197A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x18A19770)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET UNITYSDK_OFFSET(0x18A197E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET UNITYSDK_OFFSET(0x18A197B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x18A187E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A187B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19B80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A19C40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A19C70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x18A19B30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A18660)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x18A18600)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x18A19970)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x18A19900)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x18A18670)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18A19A00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A199D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x18A18890)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x18A187D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A187A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19AF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A19C00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A19C30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x18A19AA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A185A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x18A18560)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x18A19840)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x18A19800)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18A18860)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x18A18830)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x18A18820)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18730)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A192C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x18A19290)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x18A18710)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x18A191B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x18A19180)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A186C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x18A186B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x18A183C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x18A190F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18750)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19340)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x18A19310)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18740)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19300)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x18A192D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x18A18720)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET UNITYSDK_OFFSET(0x18A19280)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x18A19240)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x18A18540)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18760)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19350)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A193D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A19450)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET UNITYSDK_OFFSET(0x18A19490)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x18A188C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x18A18680)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x18A182E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x18A19030)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET UNITYSDK_OFFSET(0x18A190A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0x18A19070)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18780)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A19610)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A19690)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A19710)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET UNITYSDK_OFFSET(0x18A19750)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x18A18A20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A186E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x18A186D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x18A18450)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x18A19130)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x18A18530)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x18A18700)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x18A186F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18A18500)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x18A191F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x18A19230)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18A191C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A18770)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x18A194B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x18A19530)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x18A195B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET UNITYSDK_OFFSET(0x18A195F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x18A18970)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A186A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x18A18690)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x18A18340)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x18A190B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A18F00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET UNITYSDK_OFFSET(0x18A18520)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlock_TypeDefinitionIndex = 3944;

	class MaterialPropertyBlock : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void AddFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET))(this, name, value);
		}

		::System::Void AddFloat_1(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET))(this, nameID, value);
		}

		::System::Void AddVector(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET))(this, name, value);
		}

		::System::Void AddVector_1(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void AddColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET))(this, name, value);
		}

		::System::Void AddColor_1(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void AddMatrix(::System::String* name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET))(this, name, value);
		}

		::System::Void AddMatrix_1(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET))(this, nameID, value);
		}

		::System::Void AddTexture(::System::String* name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET))(this, name, value);
		}

		::System::Void AddTexture_1(::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET))(this, nameID, value);
		}

		::System::Void _SetRenderStateImpl(::System::IntPtr stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET))(this, stateBlock);
		}

		::System::Void SetRenderState(::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET))(this, stateBlock);
		}

		::System::Void SetFlag(::System::UInt32 flag, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET))(this, flag, enable);
		}

		::System::Single GetFloatImpl(::System::Int32 name)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Vector4 GetVectorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Matrix4x4 GetMatrixImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET))(this, name);
		}

		::UnityEngine::Texture* GetTextureImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET))(this, name);
		}

		::System::Void SetFloatImpl(::System::Int32 name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetVectorImpl(::System::Int32 name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetColorImpl(::System::Int32 name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetMatrixImpl(::System::Int32 name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetTextureImpl(::System::Int32 name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetRenderTextureImpl(::System::Int32 name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET))(this, name, value, element);
		}

		::System::Void SetBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetConstantBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET))(this, name, value, offset, size);
		}

		::System::Void SetBindlessTextureArrayImpl(::System::Int32 name, ::UnityEngine::BindlessTextureArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetConstantBufferArrayImpl(::System::Int32 name, ::UnityEngine::ConstantBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetComputeBufferArrayImpl(::System::Int32 name, ::UnityEngine::ComputeBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET))(this, name, value);
		}

		::System::Void SetFloatArrayImpl(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET))(this, name, values, count);
		}

		::System::Void SetVectorArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET))(this, name, values, count);
		}

		::System::Void SetMatrixArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET))(this, name, values, count);
		}

		::Il2CppArray<::System::Single>* GetFloatArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArrayImpl(::System::Int32 name)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET))(this, name);
		}

		::System::Int32 GetFloatArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET))(this, name);
		}

		::System::Int32 GetVectorArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET))(this, name);
		}

		::System::Int32 GetMatrixArrayCountImpl(::System::Int32 name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET))(this, name);
		}

		::System::Void ExtractFloatArrayImpl(::System::Int32 name, ::Il2CppArray<::System::Single>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET))(this, name, val);
		}

		::System::Void ExtractVectorArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET))(this, name, val);
		}

		::System::Void ExtractMatrixArrayImpl(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET))(this, name, val);
		}

		static ::System::Void Internal_CopySHCoefficientArraysFrom(::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(properties, lightProbes, sourceStart, destStart, count);
		}

		static ::System::Void Internal_CopyProbeOcclusionArrayFrom(::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::UnityEngine::Vector4>* occlusionProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(properties, occlusionProbes, sourceStart, destStart, count);
		}

		static ::System::IntPtr CreateImpl()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET))();
		}

		static ::System::Void DestroyImpl(::System::IntPtr mpb)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET))(mpb);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean keepMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(this, keepMemory);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET))(this);
		}

		::System::Int32 GetTypePropertyCount(::System::Int32 propType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET))(this, propType);
		}

		::System::Void GetAllPropertyNameIDsFromScript(::Il2CppArray<::System::Int32>* floatNameIDs, ::Il2CppArray<::System::Int32>* vectorNameIDs, ::Il2CppArray<::System::Int32>* matrixNameIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET))(this, floatNameIDs, vectorNameIDs, matrixNameIDs);
		}

		::System::Void GetAllPropertyNamesFromScript(::Il2CppArray<::System::String*>* floatNames, ::Il2CppArray<::System::String*>* vectorNames, ::Il2CppArray<::System::String*>* matrixNames)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET))(this, floatNames, vectorNames, matrixNames);
		}

		::System::Void SetFloatArray(::System::Int32 name, ::Il2CppArray<::System::Single>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void SetVectorArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void SetMatrixArray(::System::Int32 name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(this, name, values, count);
		}

		::System::Void ExtractFloatArray(::System::Int32 name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET))(this, name, values);
		}

		::System::Void ExtractVectorArray(::System::Int32 name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET))(this, name, values);
		}

		::System::Void ExtractMatrixArray(::System::Int32 name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET))(this, name, values);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Void SetFloat_1(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(this, name, value);
		}

		::System::Void SetInt_1(::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetVector(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(this, name, value);
		}

		::System::Void SetVector_1(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET))(this, name, value);
		}

		::System::Void SetColor_1(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetMatrix(::System::String* name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(this, name, value);
		}

		::System::Void SetMatrix_1(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetBuffer(::System::String* name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET))(this, name, value);
		}

		::System::Void SetBuffer_1(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetTexture(::System::String* name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(this, name, value);
		}

		::System::Void SetTexture_1(::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetTexture_2(::System::String* name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET))(this, name, value, element);
		}

		::System::Void SetTexture_3(::System::Int32 nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET))(this, nameID, value, element);
		}

		::System::Void SetConstantBuffer(::System::String* name, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET))(this, name, value, offset, size);
		}

		::System::Void SetConstantBuffer_1(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET))(this, nameID, value, offset, size);
		}

		::System::Void SetBindlessTextureArray(::System::String* name, ::UnityEngine::BindlessTextureArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET))(this, name, value);
		}

		::System::Void SetBindlessTextureArray_1(::System::Int32 nameID, ::UnityEngine::BindlessTextureArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetConstantBufferArray(::System::String* name, ::UnityEngine::ConstantBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET))(this, name, value);
		}

		::System::Void SetConstantBufferArray_1(::System::Int32 nameID, ::UnityEngine::ConstantBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetComputeBufferArray(::System::String* name, ::UnityEngine::ComputeBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET))(this, name, value);
		}

		::System::Void SetComputeBufferArray_1(::System::Int32 nameID, ::UnityEngine::ComputeBufferArray* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET))(this, nameID, value);
		}

		::System::Void SetFloatArray_1(::System::String* name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET))(this, name, values);
		}

		::System::Void SetFloatArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET))(this, nameID, values);
		}

		::System::Void SetFloatArray_3(::System::String* name, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET))(this, name, values);
		}

		::System::Void SetFloatArray_4(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET))(this, nameID, values);
		}

		::System::Void SetVectorArray_1(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET))(this, name, values);
		}

		::System::Void SetVectorArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET))(this, nameID, values);
		}

		::System::Void SetVectorArray_3(::System::String* name, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET))(this, name, values);
		}

		::System::Void SetVectorArray_4(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET))(this, nameID, values);
		}

		::System::Void SetMatrixArray_1(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET))(this, name, values);
		}

		::System::Void SetMatrixArray_2(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET))(this, nameID, values);
		}

		::System::Void SetMatrixArray_3(::System::String* name, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET))(this, name, values);
		}

		::System::Void SetMatrixArray_4(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET))(this, nameID, values);
		}

		::System::Single GetFloat(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET))(this, name);
		}

		::System::Single GetFloat_1(::System::Int32 nameID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET))(this, nameID);
		}

		::System::Int32 GetInt(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET))(this, name);
		}

		::System::Int32 GetInt_1(::System::Int32 nameID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Vector4 GetVector(::System::String* name)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET))(this, name);
		}

		::UnityEngine::Vector4 GetVector_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Color GetColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColor_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Matrix4x4 GetMatrix(::System::String* name)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET))(this, name);
		}

		::UnityEngine::Matrix4x4 GetMatrix_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET))(this, nameID);
		}

		::UnityEngine::Texture* GetTexture(::System::String* name)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET))(this, name);
		}

		::UnityEngine::Texture* GetTexture_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET))(this, nameID);
		}

		::Il2CppArray<::System::Single>* GetFloatArray(::System::String* name)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Single>* GetFloatArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET))(this, nameID);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray(::System::String* name)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET))(this, nameID);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray(::System::String* name)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET))(this, name);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray_1(::System::Int32 nameID)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET))(this, nameID);
		}

		::System::Void GetFloatArray_2(::System::String* name, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET))(this, name, values);
		}

		::System::Void GetFloatArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET))(this, nameID, values);
		}

		::System::Void GetVectorArray_2(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET))(this, name, values);
		}

		::System::Void GetVectorArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET))(this, nameID, values);
		}

		::System::Void GetMatrixArray_2(::System::String* name, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET))(this, name, values);
		}

		::System::Void GetMatrixArray_3(::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET))(this, nameID, values);
		}

		::System::Void CopySHCoefficientArraysFrom(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(this, lightProbes);
		}

		::System::Void CopySHCoefficientArraysFrom_1(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET))(this, lightProbes);
		}

		::System::Void CopySHCoefficientArraysFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET))(this, lightProbes, sourceStart, destStart, count);
		}

		::System::Void CopySHCoefficientArraysFrom_3(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET))(this, lightProbes, sourceStart, destStart, count);
		}

		::System::Void CopyProbeOcclusionArrayFrom(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(this, occlusionProbes);
		}

		::System::Void CopyProbeOcclusionArrayFrom_1(::Il2CppArray<::UnityEngine::Vector4>* occlusionProbes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET))(this, occlusionProbes);
		}

		::System::Void CopyProbeOcclusionArrayFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET))(this, occlusionProbes, sourceStart, destStart, count);
		}

		::System::Void CopyProbeOcclusionArrayFrom_3(::Il2CppArray<::UnityEngine::Vector4>* occlusionProbes, ::System::Int32 sourceStart, ::System::Int32 destStart, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET))(this, occlusionProbes, sourceStart, destStart, count);
		}

		::System::Void GetAllPropertyNameIDs(::System::Collections::Generic::List_1<::System::Int32>* floatNameIDs, ::System::Collections::Generic::List_1<::System::Int32>* vectorNameIDs, ::System::Collections::Generic::List_1<::System::Int32>* matrixNameIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET))(this, floatNameIDs, vectorNameIDs, matrixNameIDs);
		}

		::System::Void GetAllPropertyNames(::System::Collections::Generic::List_1<::System::String*>* floatNames, ::System::Collections::Generic::List_1<::System::String*>* vectorNames, ::System::Collections::Generic::List_1<::System::String*>* matrixNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET))(this, floatNames, vectorNames, matrixNames);
		}

		::System::Void GetVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void GetColorImpl_Injected(::System::Int32 name, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void GetMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET))(this, name, ret);
		}

		::System::Void SetVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET))(this, name, value);
		}

		::System::Void SetColorImpl_Injected(::System::Int32 name, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET))(this, name, value);
		}

		::System::Void SetMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET))(this, name, value);
		}
	};
}
