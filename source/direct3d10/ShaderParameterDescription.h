/*
* Copyright (c) 2007 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

#include "Enums.h"

namespace SlimDX
{
	namespace Direct3D10
	{	
		[StructLayout( LayoutKind::Sequential )]
		public value class ShaderParameterDescription
		{
		private:
			String^ semanticName;
			UInt32 semanticIndex;
			UInt32 registerIndex;
			SystemValueType systemValueType;
			RegisterComponentType componentType;
			Byte mask;///TODO: Might be able to make these more specific; I think they represent whether x y z or w is ued, etc.
			Byte readWriteMask;
		
		internal:
			ShaderParameterDescription( const D3D10_SIGNATURE_PARAMETER_DESC& desc );
		
		public:
			property String^ SemanticName
			{
				String^ get() { return semanticName; }
			}
			
			property UInt32 SemanticIndex
			{
				UInt32 get() { return semanticIndex; }
			}
			
			property UInt32 Register
			{
				UInt32 get() { return semanticIndex; }
			}
			
			property SystemValueType SystemType
			{
				SystemValueType get() { return systemValueType; }
			}
			
			property RegisterComponentType ComponentType
			{
				RegisterComponentType get() { return componentType; }
			}
			
			property Byte UsageMask
			{
				Byte get() { return mask; }
			}
			
			property Byte ReadWriteMask
			{
				Byte get() { return readWriteMask; }
			}
		};
	}
};